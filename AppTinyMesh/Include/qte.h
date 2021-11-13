#ifndef __Qte__
#define __Qte__

#include "ui-interface.h"
#include "realtime.h"
#include "meshcolor.h"
#include "beziersurface.h"
#include "revolution.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT
private:
	Ui::Assets uiw;				//!< Interface

	MeshWidget* meshWidget;		//!< Viewer
	MeshColor meshColor;		//!< Mesh.

	BezierSurface bs;			//!< Bezier surface
	Revolution revo;			//!< Bezier revolution surface

public:
	MainWindow();
	~MainWindow();
	void CreateActions();
	void UpdateGeometry();

public slots:
	void editingSceneLeft(const Ray&);
	void editingSceneRight(const Ray&);
	void BoxMeshExample();
	void ResetCamera();
	void UpdateMaterial();
	void LoadOBJ();
	void SaveOBJ();
	void GenerateBS();
	void GenerateRevo();
	void RenderBS();
	void RenderRevo();
};

#endif
