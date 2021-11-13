#include "qte.h"

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
	bs = BezierSurface(uiw.bs_n->value(), uiw.bs_m->value());
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

	revo = Revolution(uiw.revo_n->value(), origin, direction);
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
