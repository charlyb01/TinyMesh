/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_2D_INTERFACE_H
#define UI_2D_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Assets
{
public:
    QAction *actionExit;
    QAction *actionNew_Scene;
    QAction *actionExport_obj;
    QAction *actionExport_ma;
    QAction *actionLoad_ma;
    QAction *actionGL;
    QAction *actionVectorized;
    QAction *actionExport_svg;
    QAction *actionSphere_Tracing_png;
    QAction *actionLoad_OBJ;
    QAction *actionSave_OBJ;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QGroupBox *Objects_groupBox;
    QGroupBox *bs_groupBox;
    QSpinBox *bs_n;
    QSpinBox *bs_m;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *bs_nRes;
    QSpinBox *bs_mRes;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *bs_renderButton;
    QPushButton *bs_genButton;
    QFrame *line;
    QPushButton *boxMesh;
    QPushButton *resetcameraButton;
    QGroupBox *revo_groupBox_2;
    QSpinBox *revo_n;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *revo_nRes;
    QSpinBox *revo_thetaRes;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *revo_renderButton;
    QLabel *label_15;
    QDoubleSpinBox *revo_zOrigin;
    QDoubleSpinBox *revo_yOrigin;
    QDoubleSpinBox *revo_xOrigin;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QDoubleSpinBox *revo_zDirection;
    QLabel *label_20;
    QLabel *label_21;
    QDoubleSpinBox *revo_yDirection;
    QDoubleSpinBox *revo_xDirection;
    QLabel *label_22;
    QPushButton *revo_genButton;
    QFrame *line_2;
    QWidget *widget_GL;
    QGroupBox *Parameters_groupBox;
    QGroupBox *groupBox_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_13;
    QRadioButton *radioShadingButton_1;
    QCheckBox *wireframe;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *Assets)
    {
        if (Assets->objectName().isEmpty())
            Assets->setObjectName(QString::fromUtf8("Assets"));
        Assets->resize(1200, 1000);
        Assets->setMinimumSize(QSize(420, 300));
        actionExit = new QAction(Assets);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionNew_Scene = new QAction(Assets);
        actionNew_Scene->setObjectName(QString::fromUtf8("actionNew_Scene"));
        actionExport_obj = new QAction(Assets);
        actionExport_obj->setObjectName(QString::fromUtf8("actionExport_obj"));
        actionExport_ma = new QAction(Assets);
        actionExport_ma->setObjectName(QString::fromUtf8("actionExport_ma"));
        actionLoad_ma = new QAction(Assets);
        actionLoad_ma->setObjectName(QString::fromUtf8("actionLoad_ma"));
        actionGL = new QAction(Assets);
        actionGL->setObjectName(QString::fromUtf8("actionGL"));
        actionVectorized = new QAction(Assets);
        actionVectorized->setObjectName(QString::fromUtf8("actionVectorized"));
        actionExport_svg = new QAction(Assets);
        actionExport_svg->setObjectName(QString::fromUtf8("actionExport_svg"));
        actionSphere_Tracing_png = new QAction(Assets);
        actionSphere_Tracing_png->setObjectName(QString::fromUtf8("actionSphere_Tracing_png"));
        actionLoad_OBJ = new QAction(Assets);
        actionLoad_OBJ->setObjectName(QString::fromUtf8("actionLoad_OBJ"));
        actionSave_OBJ = new QAction(Assets);
        actionSave_OBJ->setObjectName(QString::fromUtf8("actionSave_OBJ"));
        centralwidget = new QWidget(Assets);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        Objects_groupBox = new QGroupBox(centralwidget);
        Objects_groupBox->setObjectName(QString::fromUtf8("Objects_groupBox"));
        Objects_groupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Objects_groupBox->sizePolicy().hasHeightForWidth());
        Objects_groupBox->setSizePolicy(sizePolicy);
        Objects_groupBox->setMinimumSize(QSize(350, 250));
        bs_groupBox = new QGroupBox(Objects_groupBox);
        bs_groupBox->setObjectName(QString::fromUtf8("bs_groupBox"));
        bs_groupBox->setGeometry(QRect(10, 60, 321, 211));
        bs_n = new QSpinBox(bs_groupBox);
        bs_n->setObjectName(QString::fromUtf8("bs_n"));
        bs_n->setGeometry(QRect(190, 30, 42, 22));
        bs_n->setMinimum(2);
        bs_n->setMaximum(13);
        bs_m = new QSpinBox(bs_groupBox);
        bs_m->setObjectName(QString::fromUtf8("bs_m"));
        bs_m->setGeometry(QRect(260, 30, 42, 22));
        bs_m->setMinimum(2);
        bs_m->setMaximum(13);
        label = new QLabel(bs_groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 141, 21));
        label_4 = new QLabel(bs_groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 30, 16, 21));
        label_5 = new QLabel(bs_groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(240, 30, 16, 21));
        label_6 = new QLabel(bs_groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 130, 141, 21));
        bs_nRes = new QSpinBox(bs_groupBox);
        bs_nRes->setObjectName(QString::fromUtf8("bs_nRes"));
        bs_nRes->setGeometry(QRect(190, 130, 42, 22));
        bs_nRes->setMinimum(2);
        bs_nRes->setMaximum(100);
        bs_mRes = new QSpinBox(bs_groupBox);
        bs_mRes->setObjectName(QString::fromUtf8("bs_mRes"));
        bs_mRes->setGeometry(QRect(260, 130, 42, 22));
        bs_mRes->setMinimum(2);
        bs_mRes->setMaximum(100);
        label_7 = new QLabel(bs_groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 130, 16, 21));
        label_8 = new QLabel(bs_groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(240, 130, 16, 21));
        bs_renderButton = new QPushButton(bs_groupBox);
        bs_renderButton->setObjectName(QString::fromUtf8("bs_renderButton"));
        bs_renderButton->setGeometry(QRect(220, 170, 80, 22));
        bs_genButton = new QPushButton(bs_groupBox);
        bs_genButton->setObjectName(QString::fromUtf8("bs_genButton"));
        bs_genButton->setGeometry(QRect(220, 70, 80, 22));
        line = new QFrame(bs_groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 100, 301, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        boxMesh = new QPushButton(Objects_groupBox);
        boxMesh->setObjectName(QString::fromUtf8("boxMesh"));
        boxMesh->setGeometry(QRect(10, 20, 152, 22));
        boxMesh->setCheckable(false);
        resetcameraButton = new QPushButton(Objects_groupBox);
        resetcameraButton->setObjectName(QString::fromUtf8("resetcameraButton"));
        resetcameraButton->setGeometry(QRect(180, 20, 151, 22));
        resetcameraButton->setCheckable(true);
        resetcameraButton->setAutoDefault(false);
        resetcameraButton->setFlat(false);
        revo_groupBox_2 = new QGroupBox(Objects_groupBox);
        revo_groupBox_2->setObjectName(QString::fromUtf8("revo_groupBox_2"));
        revo_groupBox_2->setGeometry(QRect(10, 290, 321, 271));
        revo_n = new QSpinBox(revo_groupBox_2);
        revo_n->setObjectName(QString::fromUtf8("revo_n"));
        revo_n->setGeometry(QRect(260, 30, 42, 22));
        revo_n->setMinimum(2);
        revo_n->setMaximum(13);
        label_9 = new QLabel(revo_groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 30, 131, 21));
        label_11 = new QLabel(revo_groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(240, 30, 16, 21));
        label_12 = new QLabel(revo_groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 190, 81, 21));
        revo_nRes = new QSpinBox(revo_groupBox_2);
        revo_nRes->setObjectName(QString::fromUtf8("revo_nRes"));
        revo_nRes->setGeometry(QRect(120, 190, 42, 22));
        revo_nRes->setMinimum(2);
        revo_nRes->setMaximum(100);
        revo_thetaRes = new QSpinBox(revo_groupBox_2);
        revo_thetaRes->setObjectName(QString::fromUtf8("revo_thetaRes"));
        revo_thetaRes->setGeometry(QRect(260, 190, 42, 22));
        revo_thetaRes->setMinimum(3);
        revo_thetaRes->setMaximum(100);
        revo_thetaRes->setValue(3);
        label_13 = new QLabel(revo_groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(100, 190, 16, 21));
        label_14 = new QLabel(revo_groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(225, 190, 31, 21));
        revo_renderButton = new QPushButton(revo_groupBox_2);
        revo_renderButton->setObjectName(QString::fromUtf8("revo_renderButton"));
        revo_renderButton->setGeometry(QRect(220, 230, 80, 22));
        label_15 = new QLabel(revo_groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 60, 91, 21));
        revo_zOrigin = new QDoubleSpinBox(revo_groupBox_2);
        revo_zOrigin->setObjectName(QString::fromUtf8("revo_zOrigin"));
        revo_zOrigin->setGeometry(QRect(250, 60, 51, 22));
        revo_zOrigin->setMinimum(-100.000000000000000);
        revo_zOrigin->setMaximum(100.000000000000000);
        revo_yOrigin = new QDoubleSpinBox(revo_groupBox_2);
        revo_yOrigin->setObjectName(QString::fromUtf8("revo_yOrigin"));
        revo_yOrigin->setGeometry(QRect(180, 60, 51, 22));
        revo_yOrigin->setMinimum(-100.000000000000000);
        revo_yOrigin->setMaximum(100.000000000000000);
        revo_xOrigin = new QDoubleSpinBox(revo_groupBox_2);
        revo_xOrigin->setObjectName(QString::fromUtf8("revo_xOrigin"));
        revo_xOrigin->setGeometry(QRect(110, 60, 51, 22));
        revo_xOrigin->setMinimum(-100.000000000000000);
        revo_xOrigin->setMaximum(100.000000000000000);
        label_16 = new QLabel(revo_groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(240, 60, 16, 21));
        label_17 = new QLabel(revo_groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(170, 60, 16, 21));
        label_18 = new QLabel(revo_groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(100, 60, 16, 21));
        label_19 = new QLabel(revo_groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 90, 71, 21));
        revo_zDirection = new QDoubleSpinBox(revo_groupBox_2);
        revo_zDirection->setObjectName(QString::fromUtf8("revo_zDirection"));
        revo_zDirection->setGeometry(QRect(250, 90, 51, 22));
        revo_zDirection->setMinimum(-100.000000000000000);
        revo_zDirection->setMaximum(100.000000000000000);
        label_20 = new QLabel(revo_groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(240, 90, 16, 21));
        label_21 = new QLabel(revo_groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(170, 90, 16, 21));
        revo_yDirection = new QDoubleSpinBox(revo_groupBox_2);
        revo_yDirection->setObjectName(QString::fromUtf8("revo_yDirection"));
        revo_yDirection->setGeometry(QRect(180, 90, 51, 22));
        revo_yDirection->setMinimum(-100.000000000000000);
        revo_yDirection->setMaximum(100.000000000000000);
        revo_xDirection = new QDoubleSpinBox(revo_groupBox_2);
        revo_xDirection->setObjectName(QString::fromUtf8("revo_xDirection"));
        revo_xDirection->setGeometry(QRect(110, 90, 51, 22));
        revo_xDirection->setMinimum(-100.000000000000000);
        revo_xDirection->setMaximum(100.000000000000000);
        label_22 = new QLabel(revo_groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(100, 90, 16, 21));
        revo_genButton = new QPushButton(revo_groupBox_2);
        revo_genButton->setObjectName(QString::fromUtf8("revo_genButton"));
        revo_genButton->setGeometry(QRect(220, 130, 80, 22));
        line_2 = new QFrame(revo_groupBox_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 160, 301, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(Objects_groupBox);

        widget_GL = new QWidget(centralwidget);
        widget_GL->setObjectName(QString::fromUtf8("widget_GL"));

        hboxLayout->addWidget(widget_GL);

        Parameters_groupBox = new QGroupBox(centralwidget);
        Parameters_groupBox->setObjectName(QString::fromUtf8("Parameters_groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Parameters_groupBox->sizePolicy().hasHeightForWidth());
        Parameters_groupBox->setSizePolicy(sizePolicy1);
        Parameters_groupBox->setMinimumSize(QSize(200, 141));
        groupBox_4 = new QGroupBox(Parameters_groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 171, 81));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 61, 21));
        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 50, 81, 20));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 61, 21));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 20, 81, 20));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_13 = new QGroupBox(Parameters_groupBox);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(10, 100, 171, 51));
        radioShadingButton_1 = new QRadioButton(groupBox_13);
        radioShadingButton_1->setObjectName(QString::fromUtf8("radioShadingButton_1"));
        radioShadingButton_1->setGeometry(QRect(20, 20, 61, 20));
        radioShadingButton_1->setChecked(true);
        wireframe = new QCheckBox(groupBox_13);
        wireframe->setObjectName(QString::fromUtf8("wireframe"));
        wireframe->setGeometry(QRect(90, 20, 81, 17));
        wireframe->setChecked(true);

        hboxLayout->addWidget(Parameters_groupBox);

        Assets->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Assets);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Assets->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad_OBJ);
        menuFile->addAction(actionSave_OBJ);

        retranslateUi(Assets);

        resetcameraButton->setDefault(false);


        QMetaObject::connectSlotsByName(Assets);
    } // setupUi

    void retranslateUi(QMainWindow *Assets)
    {
        Assets->setWindowTitle(QApplication::translate("Assets", "Implicit Terrain", nullptr));
        actionExit->setText(QApplication::translate("Assets", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("Assets", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        actionNew_Scene->setText(QApplication::translate("Assets", "New Scene", nullptr));
        actionExport_obj->setText(QApplication::translate("Assets", "OBJ File (.obj)", nullptr));
        actionExport_ma->setText(QApplication::translate("Assets", "Maya File (.ma)", nullptr));
        actionLoad_ma->setText(QApplication::translate("Assets", "Load", nullptr));
        actionGL->setText(QApplication::translate("Assets", "GL", nullptr));
        actionVectorized->setText(QApplication::translate("Assets", "Vectorized", nullptr));
        actionExport_svg->setText(QApplication::translate("Assets", "SVG File (.svg)", nullptr));
        actionSphere_Tracing_png->setText(QApplication::translate("Assets", "Sphere Tracing (.png)", nullptr));
        actionLoad_OBJ->setText(QApplication::translate("Assets", "Load OBJ", nullptr));
        actionSave_OBJ->setText(QApplication::translate("Assets", "Save OBJ", nullptr));
        Objects_groupBox->setTitle(QString());
        bs_groupBox->setTitle(QApplication::translate("Assets", "Bezier Surface", nullptr));
        label->setText(QApplication::translate("Assets", "Number of control points", nullptr));
        label_4->setText(QApplication::translate("Assets", "N", nullptr));
        label_5->setText(QApplication::translate("Assets", "M", nullptr));
        label_6->setText(QApplication::translate("Assets", "Resolution", nullptr));
        label_7->setText(QApplication::translate("Assets", "N", nullptr));
        label_8->setText(QApplication::translate("Assets", "M", nullptr));
        bs_renderButton->setText(QApplication::translate("Assets", "Render", nullptr));
        bs_genButton->setText(QApplication::translate("Assets", "Generate", nullptr));
#ifndef QT_NO_TOOLTIP
        boxMesh->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxMesh->setText(QApplication::translate("Assets", "Box Mesh", nullptr));
#ifndef QT_NO_TOOLTIP
        resetcameraButton->setToolTip(QApplication::translate("Assets", "<html><head/><body><p><span style=\" color:#5500ff;\">Callback #03</span></p><p><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bird</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        resetcameraButton->setText(QApplication::translate("Assets", "Reset Camera", nullptr));
        revo_groupBox_2->setTitle(QApplication::translate("Assets", "Bezier Revolution Surface", nullptr));
        label_9->setText(QApplication::translate("Assets", "Number of control points", nullptr));
        label_11->setText(QApplication::translate("Assets", "N", nullptr));
        label_12->setText(QApplication::translate("Assets", "Resolution", nullptr));
        label_13->setText(QApplication::translate("Assets", "N", nullptr));
        label_14->setText(QApplication::translate("Assets", "Theta", nullptr));
        revo_renderButton->setText(QApplication::translate("Assets", "Render", nullptr));
        label_15->setText(QApplication::translate("Assets", "Axis origin", nullptr));
        label_16->setText(QApplication::translate("Assets", "Z", nullptr));
        label_17->setText(QApplication::translate("Assets", "Y", nullptr));
        label_18->setText(QApplication::translate("Assets", "X", nullptr));
        label_19->setText(QApplication::translate("Assets", "Axis direction", nullptr));
        label_20->setText(QApplication::translate("Assets", "Z", nullptr));
        label_21->setText(QApplication::translate("Assets", "Y", nullptr));
        label_22->setText(QApplication::translate("Assets", "X", nullptr));
        revo_genButton->setText(QApplication::translate("Assets", "Generate", nullptr));
        Parameters_groupBox->setTitle(QString());
        groupBox_4->setTitle(QApplication::translate("Assets", " Statistics", nullptr));
        label_2->setText(QApplication::translate("Assets", "Vertex", nullptr));
        label_3->setText(QApplication::translate("Assets", "Triangles", nullptr));
        lineEdit->setText(QString());
        groupBox_13->setTitle(QApplication::translate("Assets", "Shading", nullptr));
        radioShadingButton_1->setText(QApplication::translate("Assets", "Normal", nullptr));
        wireframe->setText(QApplication::translate("Assets", "Wireframe", nullptr));
        menuFile->setTitle(QApplication::translate("Assets", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Assets: public Ui_Assets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_2D_INTERFACE_H
