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
    QCheckBox *bs_negativeM;
    QLabel *label_47;
    QCheckBox *bs_negativeN;
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
    QLabel *label_26;
    QCheckBox *revo_negative;
    QGroupBox *twist_groupBox;
    QLabel *label_10;
    QLabel *label_27;
    QDoubleSpinBox *twist_zOrigin;
    QDoubleSpinBox *twist_yOrigin;
    QDoubleSpinBox *twist_xOrigin;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QDoubleSpinBox *twist_zDirection;
    QLabel *label_32;
    QLabel *label_33;
    QDoubleSpinBox *twist_yDirection;
    QDoubleSpinBox *twist_xDirection;
    QLabel *label_34;
    QPushButton *twist_globalButton;
    QFrame *line_3;
    QDoubleSpinBox *twist_period;
    QPushButton *twist_localButton;
    QLabel *label_24;
    QLabel *label_39;
    QDoubleSpinBox *twist_r2;
    QDoubleSpinBox *twist_r1;
    QLabel *label_40;
    QGroupBox *tr_groupBox;
    QLabel *label_41;
    QDoubleSpinBox *tr_z;
    QLabel *label_42;
    QLabel *label_43;
    QDoubleSpinBox *tr_y;
    QDoubleSpinBox *tr_x;
    QLabel *label_44;
    QFrame *line_4;
    QPushButton *tr_localButton;
    QLabel *label_25;
    QLabel *label_45;
    QDoubleSpinBox *tr_r2;
    QDoubleSpinBox *tr_r1;
    QLabel *label_46;
    QLabel *label_35;
    QLabel *label_36;
    QDoubleSpinBox *tr_zOrigin;
    QLabel *label_37;
    QDoubleSpinBox *tr_yOrigin;
    QDoubleSpinBox *tr_xOrigin;
    QLabel *label_38;
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
    QPushButton *resetcameraButton;
    QPushButton *boxMesh;
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
        bs_groupBox->setGeometry(QRect(10, 10, 321, 191));
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
        label->setGeometry(QRect(10, 30, 151, 21));
        label_4 = new QLabel(bs_groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 30, 16, 21));
        label_5 = new QLabel(bs_groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(240, 30, 16, 21));
        label_6 = new QLabel(bs_groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 110, 141, 21));
        bs_nRes = new QSpinBox(bs_groupBox);
        bs_nRes->setObjectName(QString::fromUtf8("bs_nRes"));
        bs_nRes->setGeometry(QRect(190, 110, 42, 22));
        bs_nRes->setMinimum(2);
        bs_nRes->setMaximum(100);
        bs_mRes = new QSpinBox(bs_groupBox);
        bs_mRes->setObjectName(QString::fromUtf8("bs_mRes"));
        bs_mRes->setGeometry(QRect(260, 110, 42, 22));
        bs_mRes->setMinimum(2);
        bs_mRes->setMaximum(100);
        label_7 = new QLabel(bs_groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 110, 16, 21));
        label_8 = new QLabel(bs_groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(240, 110, 16, 21));
        bs_renderButton = new QPushButton(bs_groupBox);
        bs_renderButton->setObjectName(QString::fromUtf8("bs_renderButton"));
        bs_renderButton->setGeometry(QRect(169, 150, 131, 22));
        bs_genButton = new QPushButton(bs_groupBox);
        bs_genButton->setObjectName(QString::fromUtf8("bs_genButton"));
        bs_genButton->setGeometry(QRect(20, 150, 131, 22));
        line = new QFrame(bs_groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 80, 301, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        bs_negativeM = new QCheckBox(bs_groupBox);
        bs_negativeM->setObjectName(QString::fromUtf8("bs_negativeM"));
        bs_negativeM->setGeometry(QRect(181, 60, 121, 20));
        label_47 = new QLabel(bs_groupBox);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(10, 60, 121, 21));
        bs_negativeN = new QCheckBox(bs_groupBox);
        bs_negativeN->setObjectName(QString::fromUtf8("bs_negativeN"));
        bs_negativeN->setGeometry(QRect(160, 60, 21, 20));
        revo_groupBox_2 = new QGroupBox(Objects_groupBox);
        revo_groupBox_2->setObjectName(QString::fromUtf8("revo_groupBox_2"));
        revo_groupBox_2->setGeometry(QRect(10, 220, 321, 271));
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
        label_14->setGeometry(QRect(220, 190, 31, 21));
        revo_renderButton = new QPushButton(revo_groupBox_2);
        revo_renderButton->setObjectName(QString::fromUtf8("revo_renderButton"));
        revo_renderButton->setGeometry(QRect(169, 230, 131, 22));
        label_15 = new QLabel(revo_groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 100, 91, 21));
        revo_zOrigin = new QDoubleSpinBox(revo_groupBox_2);
        revo_zOrigin->setObjectName(QString::fromUtf8("revo_zOrigin"));
        revo_zOrigin->setGeometry(QRect(250, 100, 51, 22));
        revo_zOrigin->setMinimum(-100.000000000000000);
        revo_zOrigin->setMaximum(100.000000000000000);
        revo_yOrigin = new QDoubleSpinBox(revo_groupBox_2);
        revo_yOrigin->setObjectName(QString::fromUtf8("revo_yOrigin"));
        revo_yOrigin->setGeometry(QRect(180, 100, 51, 22));
        revo_yOrigin->setMinimum(-100.000000000000000);
        revo_yOrigin->setMaximum(100.000000000000000);
        revo_xOrigin = new QDoubleSpinBox(revo_groupBox_2);
        revo_xOrigin->setObjectName(QString::fromUtf8("revo_xOrigin"));
        revo_xOrigin->setGeometry(QRect(110, 100, 51, 22));
        revo_xOrigin->setMinimum(-100.000000000000000);
        revo_xOrigin->setMaximum(100.000000000000000);
        label_16 = new QLabel(revo_groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(240, 100, 16, 21));
        label_17 = new QLabel(revo_groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(170, 100, 16, 21));
        label_18 = new QLabel(revo_groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(100, 100, 16, 21));
        label_19 = new QLabel(revo_groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 130, 71, 21));
        revo_zDirection = new QDoubleSpinBox(revo_groupBox_2);
        revo_zDirection->setObjectName(QString::fromUtf8("revo_zDirection"));
        revo_zDirection->setGeometry(QRect(250, 130, 51, 22));
        revo_zDirection->setMinimum(-100.000000000000000);
        revo_zDirection->setMaximum(100.000000000000000);
        label_20 = new QLabel(revo_groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(240, 130, 16, 21));
        label_21 = new QLabel(revo_groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(170, 130, 16, 21));
        revo_yDirection = new QDoubleSpinBox(revo_groupBox_2);
        revo_yDirection->setObjectName(QString::fromUtf8("revo_yDirection"));
        revo_yDirection->setGeometry(QRect(180, 130, 51, 22));
        revo_yDirection->setMinimum(-100.000000000000000);
        revo_yDirection->setMaximum(100.000000000000000);
        revo_xDirection = new QDoubleSpinBox(revo_groupBox_2);
        revo_xDirection->setObjectName(QString::fromUtf8("revo_xDirection"));
        revo_xDirection->setGeometry(QRect(110, 130, 51, 22));
        revo_xDirection->setMinimum(-100.000000000000000);
        revo_xDirection->setMaximum(100.000000000000000);
        label_22 = new QLabel(revo_groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(100, 130, 16, 21));
        revo_genButton = new QPushButton(revo_groupBox_2);
        revo_genButton->setObjectName(QString::fromUtf8("revo_genButton"));
        revo_genButton->setGeometry(QRect(20, 230, 131, 22));
        line_2 = new QFrame(revo_groupBox_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 160, 301, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_26 = new QLabel(revo_groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 60, 131, 21));
        revo_negative = new QCheckBox(revo_groupBox_2);
        revo_negative->setObjectName(QString::fromUtf8("revo_negative"));
        revo_negative->setGeometry(QRect(211, 60, 91, 20));
        twist_groupBox = new QGroupBox(Objects_groupBox);
        twist_groupBox->setObjectName(QString::fromUtf8("twist_groupBox"));
        twist_groupBox->setGeometry(QRect(10, 510, 321, 231));
        label_10 = new QLabel(twist_groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 30, 131, 21));
        label_27 = new QLabel(twist_groupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 60, 91, 21));
        twist_zOrigin = new QDoubleSpinBox(twist_groupBox);
        twist_zOrigin->setObjectName(QString::fromUtf8("twist_zOrigin"));
        twist_zOrigin->setGeometry(QRect(250, 60, 51, 22));
        twist_zOrigin->setMinimum(-100.000000000000000);
        twist_zOrigin->setMaximum(100.000000000000000);
        twist_yOrigin = new QDoubleSpinBox(twist_groupBox);
        twist_yOrigin->setObjectName(QString::fromUtf8("twist_yOrigin"));
        twist_yOrigin->setGeometry(QRect(180, 60, 51, 22));
        twist_yOrigin->setMinimum(-100.000000000000000);
        twist_yOrigin->setMaximum(100.000000000000000);
        twist_xOrigin = new QDoubleSpinBox(twist_groupBox);
        twist_xOrigin->setObjectName(QString::fromUtf8("twist_xOrigin"));
        twist_xOrigin->setGeometry(QRect(110, 60, 51, 22));
        twist_xOrigin->setMinimum(-100.000000000000000);
        twist_xOrigin->setMaximum(100.000000000000000);
        label_28 = new QLabel(twist_groupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(240, 60, 16, 21));
        label_29 = new QLabel(twist_groupBox);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(170, 60, 16, 21));
        label_30 = new QLabel(twist_groupBox);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(100, 60, 16, 21));
        label_31 = new QLabel(twist_groupBox);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(10, 90, 71, 21));
        twist_zDirection = new QDoubleSpinBox(twist_groupBox);
        twist_zDirection->setObjectName(QString::fromUtf8("twist_zDirection"));
        twist_zDirection->setGeometry(QRect(250, 90, 51, 22));
        twist_zDirection->setMinimum(-100.000000000000000);
        twist_zDirection->setMaximum(100.000000000000000);
        label_32 = new QLabel(twist_groupBox);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(240, 90, 16, 21));
        label_33 = new QLabel(twist_groupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(170, 90, 16, 21));
        twist_yDirection = new QDoubleSpinBox(twist_groupBox);
        twist_yDirection->setObjectName(QString::fromUtf8("twist_yDirection"));
        twist_yDirection->setGeometry(QRect(180, 90, 51, 22));
        twist_yDirection->setMinimum(-100.000000000000000);
        twist_yDirection->setMaximum(100.000000000000000);
        twist_xDirection = new QDoubleSpinBox(twist_groupBox);
        twist_xDirection->setObjectName(QString::fromUtf8("twist_xDirection"));
        twist_xDirection->setGeometry(QRect(110, 90, 51, 22));
        twist_xDirection->setMinimum(-100.000000000000000);
        twist_xDirection->setMaximum(100.000000000000000);
        label_34 = new QLabel(twist_groupBox);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(100, 90, 16, 21));
        twist_globalButton = new QPushButton(twist_groupBox);
        twist_globalButton->setObjectName(QString::fromUtf8("twist_globalButton"));
        twist_globalButton->setGeometry(QRect(20, 190, 131, 22));
        line_3 = new QFrame(twist_groupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 120, 301, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        twist_period = new QDoubleSpinBox(twist_groupBox);
        twist_period->setObjectName(QString::fromUtf8("twist_period"));
        twist_period->setGeometry(QRect(250, 30, 51, 22));
        twist_period->setMinimum(0.010000000000000);
        twist_period->setMaximum(100.000000000000000);
        twist_period->setValue(1.000000000000000);
        twist_localButton = new QPushButton(twist_groupBox);
        twist_localButton->setObjectName(QString::fromUtf8("twist_localButton"));
        twist_localButton->setGeometry(QRect(169, 190, 131, 22));
        label_24 = new QLabel(twist_groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 150, 141, 21));
        label_39 = new QLabel(twist_groupBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(230, 150, 16, 21));
        twist_r2 = new QDoubleSpinBox(twist_groupBox);
        twist_r2->setObjectName(QString::fromUtf8("twist_r2"));
        twist_r2->setGeometry(QRect(250, 150, 51, 22));
        twist_r2->setMinimum(0.010000000000000);
        twist_r2->setMaximum(100.000000000000000);
        twist_r1 = new QDoubleSpinBox(twist_groupBox);
        twist_r1->setObjectName(QString::fromUtf8("twist_r1"));
        twist_r1->setGeometry(QRect(160, 150, 51, 22));
        twist_r1->setMinimum(0.000000000000000);
        twist_r1->setMaximum(100.000000000000000);
        label_40 = new QLabel(twist_groupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(140, 150, 16, 21));
        tr_groupBox = new QGroupBox(Objects_groupBox);
        tr_groupBox->setObjectName(QString::fromUtf8("tr_groupBox"));
        tr_groupBox->setGeometry(QRect(10, 760, 321, 201));
        label_41 = new QLabel(tr_groupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(10, 30, 71, 21));
        tr_z = new QDoubleSpinBox(tr_groupBox);
        tr_z->setObjectName(QString::fromUtf8("tr_z"));
        tr_z->setGeometry(QRect(250, 30, 51, 22));
        tr_z->setMinimum(-100.000000000000000);
        tr_z->setMaximum(100.000000000000000);
        label_42 = new QLabel(tr_groupBox);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(240, 30, 16, 21));
        label_43 = new QLabel(tr_groupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(170, 30, 16, 21));
        tr_y = new QDoubleSpinBox(tr_groupBox);
        tr_y->setObjectName(QString::fromUtf8("tr_y"));
        tr_y->setGeometry(QRect(180, 30, 51, 22));
        tr_y->setMinimum(-100.000000000000000);
        tr_y->setMaximum(100.000000000000000);
        tr_x = new QDoubleSpinBox(tr_groupBox);
        tr_x->setObjectName(QString::fromUtf8("tr_x"));
        tr_x->setGeometry(QRect(110, 30, 51, 22));
        tr_x->setMinimum(-100.000000000000000);
        tr_x->setMaximum(100.000000000000000);
        label_44 = new QLabel(tr_groupBox);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(100, 30, 16, 21));
        line_4 = new QFrame(tr_groupBox);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 60, 301, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        tr_localButton = new QPushButton(tr_groupBox);
        tr_localButton->setObjectName(QString::fromUtf8("tr_localButton"));
        tr_localButton->setGeometry(QRect(170, 160, 131, 22));
        label_25 = new QLabel(tr_groupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 120, 141, 21));
        label_45 = new QLabel(tr_groupBox);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(230, 120, 16, 21));
        tr_r2 = new QDoubleSpinBox(tr_groupBox);
        tr_r2->setObjectName(QString::fromUtf8("tr_r2"));
        tr_r2->setGeometry(QRect(250, 120, 51, 22));
        tr_r2->setMinimum(0.010000000000000);
        tr_r2->setMaximum(100.000000000000000);
        tr_r1 = new QDoubleSpinBox(tr_groupBox);
        tr_r1->setObjectName(QString::fromUtf8("tr_r1"));
        tr_r1->setGeometry(QRect(160, 120, 51, 22));
        tr_r1->setMinimum(0.000000000000000);
        tr_r1->setMaximum(100.000000000000000);
        label_46 = new QLabel(tr_groupBox);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(140, 120, 16, 21));
        label_35 = new QLabel(tr_groupBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(170, 90, 16, 21));
        label_36 = new QLabel(tr_groupBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 90, 91, 21));
        tr_zOrigin = new QDoubleSpinBox(tr_groupBox);
        tr_zOrigin->setObjectName(QString::fromUtf8("tr_zOrigin"));
        tr_zOrigin->setGeometry(QRect(250, 90, 51, 22));
        tr_zOrigin->setMinimum(-100.000000000000000);
        tr_zOrigin->setMaximum(100.000000000000000);
        label_37 = new QLabel(tr_groupBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(240, 90, 16, 21));
        tr_yOrigin = new QDoubleSpinBox(tr_groupBox);
        tr_yOrigin->setObjectName(QString::fromUtf8("tr_yOrigin"));
        tr_yOrigin->setGeometry(QRect(180, 90, 51, 22));
        tr_yOrigin->setMinimum(-100.000000000000000);
        tr_yOrigin->setMaximum(100.000000000000000);
        tr_xOrigin = new QDoubleSpinBox(tr_groupBox);
        tr_xOrigin->setObjectName(QString::fromUtf8("tr_xOrigin"));
        tr_xOrigin->setGeometry(QRect(110, 90, 51, 22));
        tr_xOrigin->setMinimum(-100.000000000000000);
        tr_xOrigin->setMaximum(100.000000000000000);
        label_38 = new QLabel(tr_groupBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(100, 90, 16, 21));

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
        Parameters_groupBox->setMinimumSize(QSize(250, 141));
        groupBox_4 = new QGroupBox(Parameters_groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 221, 81));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 61, 21));
        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 50, 91, 20));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 61, 21));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 20, 91, 20));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_13 = new QGroupBox(Parameters_groupBox);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(10, 100, 221, 61));
        radioShadingButton_1 = new QRadioButton(groupBox_13);
        radioShadingButton_1->setObjectName(QString::fromUtf8("radioShadingButton_1"));
        radioShadingButton_1->setGeometry(QRect(10, 30, 61, 20));
        radioShadingButton_1->setChecked(true);
        wireframe = new QCheckBox(groupBox_13);
        wireframe->setObjectName(QString::fromUtf8("wireframe"));
        wireframe->setGeometry(QRect(120, 30, 81, 17));
        wireframe->setChecked(true);
        resetcameraButton = new QPushButton(Parameters_groupBox);
        resetcameraButton->setObjectName(QString::fromUtf8("resetcameraButton"));
        resetcameraButton->setGeometry(QRect(50, 220, 151, 22));
        resetcameraButton->setCheckable(true);
        resetcameraButton->setAutoDefault(false);
        resetcameraButton->setFlat(false);
        boxMesh = new QPushButton(Parameters_groupBox);
        boxMesh->setObjectName(QString::fromUtf8("boxMesh"));
        boxMesh->setGeometry(QRect(50, 180, 152, 22));
        boxMesh->setCheckable(false);

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
        bs_negativeM->setText(QApplication::translate("Assets", "Allow negative N/M", nullptr));
        label_47->setText(QApplication::translate("Assets", "Random liberty degree", nullptr));
        bs_negativeN->setText(QString());
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
        label_26->setText(QApplication::translate("Assets", "Random liberty degree", nullptr));
        revo_negative->setText(QApplication::translate("Assets", "Allow negative", nullptr));
        twist_groupBox->setTitle(QApplication::translate("Assets", "Twist Warping", nullptr));
        label_10->setText(QApplication::translate("Assets", "Period length", nullptr));
        label_27->setText(QApplication::translate("Assets", "Axis origin", nullptr));
        label_28->setText(QApplication::translate("Assets", "Z", nullptr));
        label_29->setText(QApplication::translate("Assets", "Y", nullptr));
        label_30->setText(QApplication::translate("Assets", "X", nullptr));
        label_31->setText(QApplication::translate("Assets", "Axis direction", nullptr));
        label_32->setText(QApplication::translate("Assets", "Z", nullptr));
        label_33->setText(QApplication::translate("Assets", "Y", nullptr));
        label_34->setText(QApplication::translate("Assets", "X", nullptr));
        twist_globalButton->setText(QApplication::translate("Assets", "Global Twist", nullptr));
        twist_localButton->setText(QApplication::translate("Assets", "Local Twist", nullptr));
        label_24->setText(QApplication::translate("Assets", "Effective radiuses", nullptr));
        label_39->setText(QApplication::translate("Assets", "R2", nullptr));
        label_40->setText(QApplication::translate("Assets", "R1", nullptr));
        tr_groupBox->setTitle(QApplication::translate("Assets", "Translation Warping", nullptr));
        label_41->setText(QApplication::translate("Assets", "Translation", nullptr));
        label_42->setText(QApplication::translate("Assets", "Z", nullptr));
        label_43->setText(QApplication::translate("Assets", "Y", nullptr));
        label_44->setText(QApplication::translate("Assets", "X", nullptr));
        tr_localButton->setText(QApplication::translate("Assets", "Local Translation", nullptr));
        label_25->setText(QApplication::translate("Assets", "Effective radiuses", nullptr));
        label_45->setText(QApplication::translate("Assets", "R2", nullptr));
        label_46->setText(QApplication::translate("Assets", "R1", nullptr));
        label_35->setText(QApplication::translate("Assets", "Y", nullptr));
        label_36->setText(QApplication::translate("Assets", "Axis origin", nullptr));
        label_37->setText(QApplication::translate("Assets", "Z", nullptr));
        label_38->setText(QApplication::translate("Assets", "X", nullptr));
        Parameters_groupBox->setTitle(QString());
        groupBox_4->setTitle(QApplication::translate("Assets", " Statistics", nullptr));
        label_2->setText(QApplication::translate("Assets", "Vertex", nullptr));
        label_3->setText(QApplication::translate("Assets", "Triangles", nullptr));
        lineEdit->setText(QString());
        groupBox_13->setTitle(QApplication::translate("Assets", "Shading", nullptr));
        radioShadingButton_1->setText(QApplication::translate("Assets", "Normal", nullptr));
        wireframe->setText(QApplication::translate("Assets", "Wireframe", nullptr));
#ifndef QT_NO_TOOLTIP
        resetcameraButton->setToolTip(QApplication::translate("Assets", "<html><head/><body><p><span style=\" color:#5500ff;\">Callback #03</span></p><p><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bird</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        resetcameraButton->setText(QApplication::translate("Assets", "Reset Camera", nullptr));
#ifndef QT_NO_TOOLTIP
        boxMesh->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxMesh->setText(QApplication::translate("Assets", "Box Mesh", nullptr));
        menuFile->setTitle(QApplication::translate("Assets", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Assets: public Ui_Assets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_2D_INTERFACE_H
