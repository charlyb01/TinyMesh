#include "qte.h"
#include "twist.h"
#include "localtwist.h"
#include "localtranslation.h"

MainWindow::MainWindow()
{
	// Chargement de l'interface
	uiw.setupUi(this);

	// Chargement du GLWidget
	meshWidget = new MeshWidget;
	QGridLayout* GLlayout = new QGridLayout;
	GLlayout->addWidget(meshWidget, 0, 0);
	GLlayout->setContentsMargins(0, 0, 0, 0);
	uiw.widget_GL->setLayout(GLlayout);

	// Creation des connect
	CreateActions();

	meshWidget->SetCamera(Camera(Vector(639, -604, 76), Vector(0.0, 0.0, 0.0)));
}

MainWindow::~MainWindow()
{
	delete meshWidget;
}

void MainWindow::CreateActions()
{
	// Buttons
	connect(uiw.boxMesh, SIGNAL(clicked()), this, SLOT(BoxMeshExample()));
	connect(uiw.resetcameraButton, SIGNAL(clicked()), this, SLOT(ResetCamera()));
	connect(uiw.wireframe, SIGNAL(clicked()), this, SLOT(UpdateMaterial()));
	connect(uiw.bs_genButton, SIGNAL(clicked()), this, SLOT(GenerateBS()));
	connect(uiw.revo_genButton, SIGNAL(clicked()), this, SLOT(GenerateRevo()));
	connect(uiw.bs_renderButton, SIGNAL(clicked()), this, SLOT(RenderBS()));
	connect(uiw.revo_renderButton, SIGNAL(clicked()), this, SLOT(RenderRevo()));
	connect(uiw.twist_globalButton, SIGNAL(clicked()), this, SLOT(DoGlobalTwist()));
	connect(uiw.twist_localButton, SIGNAL(clicked()), this, SLOT(DoLocalTwist()));
	connect(uiw.tr_localButton, SIGNAL(clicked()), this, SLOT(DoLocalTranslation()));

	// Menu
	connect(uiw.actionLoad_OBJ, SIGNAL(triggered()), this, SLOT(LoadOBJ()));
	connect(uiw.actionSave_OBJ, SIGNAL(triggered()), this, SLOT(SaveOBJ()));

	// Widget edition
	connect(meshWidget, SIGNAL(_signalEditSceneLeft(const Ray&)), this, SLOT(editingSceneLeft(const Ray&)));
	connect(meshWidget, SIGNAL(_signalEditSceneRight(const Ray&)), this, SLOT(editingSceneRight(const Ray&)));
}

void MainWindow::editingSceneLeft(const Ray&)
{
}

void MainWindow::editingSceneRight(const Ray&)
{
}

void MainWindow::BoxMeshExample()
{
	meshColor = MeshColor(Mesh(Box(1.0)));
	UpdateGeometry();
}

void MainWindow::UpdateGeometry()
{
	meshWidget->ClearAll();
	meshWidget->AddMesh("BoxMesh", meshColor);

	uiw.lineEdit->setText(QString::number(meshColor.Vertexes()));
	uiw.lineEdit_2->setText(QString::number(meshColor.Triangles()));

	UpdateMaterial();
}

void MainWindow::UpdateMaterial()
{
	meshWidget->UseWireframeGlobal(uiw.wireframe->isChecked());
}

void MainWindow::ResetCamera()
{
	meshWidget->SetCamera(Camera(Vector(-10.0), Vector(0.0)));
}

void MainWindow::LoadOBJ()
{
	// TODO: finish ui to open windows to load
	meshColor = MeshColor();
	UpdateGeometry();
}

void MainWindow::SaveOBJ()
{
	// TODO: finish ui to open windows to save
	meshColor.SaveObj("test.obj", "test");
}

void MainWindow::GenerateBS()
{
	bs = BezierSurface(uiw.bs_n->value(), uiw.bs_m->value(),
		uiw.bs_negativeN->isChecked(), uiw.bs_negativeM->isChecked());
	RenderBS();
}

void MainWindow::GenerateRevo()
{
	Vector origin = Vector(
		uiw.revo_xOrigin->value(), 
		uiw.revo_yOrigin->value(), 
		uiw.revo_zOrigin->value());
	Vector direction = Vector(
		uiw.revo_xDirection->value(), 
		uiw.revo_yDirection->value(), 
		uiw.revo_zDirection->value());

	if (direction == Vector(0.))
	{
		uiw.revo_yDirection->setValue(1.);
		direction = Vector::Y;
	}

	revo = Revolution(uiw.revo_n->value(), origin, direction, uiw.revo_negative->isChecked());
	RenderRevo();
}

void MainWindow::RenderBS()
{
	if (uiw.bs_nRes->value() < uiw.bs_n->value())
		uiw.bs_nRes->setValue(uiw.bs_n->value());

	if (uiw.bs_mRes->value() < uiw.bs_m->value())
		uiw.bs_mRes->setValue(uiw.bs_m->value());

	meshColor = MeshColor(bs.getMesh(uiw.bs_nRes->value(), uiw.bs_mRes->value()));
	UpdateGeometry();
}

void MainWindow::RenderRevo()
{
	if (uiw.revo_nRes->value() < uiw.revo_n->value())
		uiw.revo_nRes->setValue(uiw.revo_n->value());

	meshColor = MeshColor(revo.getMesh(uiw.revo_nRes->value(), uiw.revo_thetaRes->value()));
	UpdateGeometry();
}

void MainWindow::DoGlobalTwist()
{
	Vector origin = Vector(
		uiw.twist_xOrigin->value(),
		uiw.twist_yOrigin->value(),
		uiw.twist_zOrigin->value());
	Vector direction = Vector(
		uiw.twist_xDirection->value(),
		uiw.twist_yDirection->value(),
		uiw.twist_zDirection->value());

	if (direction == Vector(0.))
	{
		uiw.twist_yDirection->setValue(1.);
		direction = Vector::Y;
	}

	Twist t = Twist(uiw.twist_period->value(), origin, direction);
	meshColor = MeshColor(t.warpMesh(meshColor));
	UpdateGeometry();
}

void MainWindow::DoLocalTwist()
{
	Vector origin = Vector(
		uiw.twist_xOrigin->value(),
		uiw.twist_yOrigin->value(),
		uiw.twist_zOrigin->value());
	Vector direction = Vector(
		uiw.twist_xDirection->value(),
		uiw.twist_yDirection->value(),
		uiw.twist_zDirection->value());

	if (direction == Vector(0.))
	{
		uiw.twist_yDirection->setValue(1.);
		direction = Vector::Y;
	}
	if (uiw.twist_r2->value() < uiw.twist_r1->value())
		uiw.twist_r2->setValue(uiw.twist_r1->value());

	LocalTwist lt = LocalTwist(origin, uiw.twist_r1->value(), uiw.twist_r2->value(),
		uiw.twist_period->value(), direction);
	meshColor = MeshColor(lt.warpMesh(meshColor));
	UpdateGeometry();
}

void MainWindow::DoLocalTranslation()
{
	Vector origin = Vector(
		uiw.tr_xOrigin->value(),
		uiw.tr_yOrigin->value(),
		uiw.tr_zOrigin->value());
	Vector t = Vector(
		uiw.tr_x->value(),
		uiw.tr_y->value(),
		uiw.tr_z->value());

	if (uiw.tr_r2->value() < uiw.tr_r1->value())
		uiw.tr_r2->setValue(uiw.tr_r1->value());

	LocalTranslation lt = LocalTranslation(origin, uiw.tr_r1->value(), uiw.tr_r2->value(), t);
	meshColor = MeshColor(lt.warpMesh(meshColor));
	UpdateGeometry();
}
