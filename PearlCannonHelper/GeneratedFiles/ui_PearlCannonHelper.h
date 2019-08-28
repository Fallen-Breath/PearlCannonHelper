/********************************************************************************
** Form generated from reading UI file 'PearlCannonHelper.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEARLCANNONHELPER_H
#define UI_PEARLCANNONHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PearlCannonHelperClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *posGroupBox;
    QGridLayout *gridLayout;
    QLabel *posYLabel;
    QLineEdit *posYLineEdit;
    QLabel *posXLabel;
    QLineEdit *posZLineEdit;
    QLineEdit *posXLineEdit;
    QLabel *posZLabel;
    QGroupBox *motionGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *motionXLineEdit;
    QLabel *motionXLabel;
    QLabel *motionYLabel;
    QLineEdit *motionZLineEdit;
    QLineEdit *motionYLineEdit;
    QLabel *motionZLabel;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *bitLineEdit0;
    QLineEdit *bitLineEdit1;
    QLineEdit *bitLineEdit2;
    QLineEdit *bitLineEdit3;
    QHBoxLayout *horizontalLayout;
    QPushButton *copyBitPushButton;
    QPushButton *pasteBitPushButton;
    QPushButton *genFromDestination;
    QSpacerItem *horizontalSpacer_12;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QComboBox *yawComboBox;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *amoutLabel1;
    QSpinBox *amoutSpinBox1;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *pitchComboBox;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *amoutLabel2;
    QSpinBox *amoutSpinBox2;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *calcFTLPushButton;
    QCheckBox *isStartFromExplosionCheckBox;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_3;
    QLabel *groundYLabel;
    QLineEdit *groundYLineEdit;
    QLabel *maxTickLabel;
    QLineEdit *maxTickLineEdit;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *genOutputPushButton;
    QTableView *outputTableView;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *languagePushButton;
    QSpacerItem *horizontalSpacer_13;
    QLabel *CreditLabel;

    void setupUi(QMainWindow *PearlCannonHelperClass)
    {
        if (PearlCannonHelperClass->objectName().isEmpty())
            PearlCannonHelperClass->setObjectName(QString::fromUtf8("PearlCannonHelperClass"));
        PearlCannonHelperClass->resize(896, 538);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PearlCannonHelperClass->sizePolicy().hasHeightForWidth());
        PearlCannonHelperClass->setSizePolicy(sizePolicy);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8(":/PearlCannonHelper/exe_ico.ico")));
        PearlCannonHelperClass->setWindowIcon(icon);
        centralWidget = new QWidget(PearlCannonHelperClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        posGroupBox = new QGroupBox(tab);
        posGroupBox->setObjectName(QString::fromUtf8("posGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(posGroupBox->sizePolicy().hasHeightForWidth());
        posGroupBox->setSizePolicy(sizePolicy1);
        posGroupBox->setFont(font);
        gridLayout = new QGridLayout(posGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        posYLabel = new QLabel(posGroupBox);
        posYLabel->setObjectName(QString::fromUtf8("posYLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(posYLabel->sizePolicy().hasHeightForWidth());
        posYLabel->setSizePolicy(sizePolicy2);
        posYLabel->setFont(font);
        posYLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(posYLabel, 1, 0, 1, 1);

        posYLineEdit = new QLineEdit(posGroupBox);
        posYLineEdit->setObjectName(QString::fromUtf8("posYLineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(posYLineEdit->sizePolicy().hasHeightForWidth());
        posYLineEdit->setSizePolicy(sizePolicy3);
        posYLineEdit->setFont(font);

        gridLayout->addWidget(posYLineEdit, 1, 1, 1, 1);

        posXLabel = new QLabel(posGroupBox);
        posXLabel->setObjectName(QString::fromUtf8("posXLabel"));
        sizePolicy2.setHeightForWidth(posXLabel->sizePolicy().hasHeightForWidth());
        posXLabel->setSizePolicy(sizePolicy2);
        posXLabel->setFont(font);
        posXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(posXLabel, 0, 0, 1, 1);

        posZLineEdit = new QLineEdit(posGroupBox);
        posZLineEdit->setObjectName(QString::fromUtf8("posZLineEdit"));
        sizePolicy3.setHeightForWidth(posZLineEdit->sizePolicy().hasHeightForWidth());
        posZLineEdit->setSizePolicy(sizePolicy3);
        posZLineEdit->setFont(font);

        gridLayout->addWidget(posZLineEdit, 2, 1, 1, 1);

        posXLineEdit = new QLineEdit(posGroupBox);
        posXLineEdit->setObjectName(QString::fromUtf8("posXLineEdit"));
        sizePolicy3.setHeightForWidth(posXLineEdit->sizePolicy().hasHeightForWidth());
        posXLineEdit->setSizePolicy(sizePolicy3);
        posXLineEdit->setFont(font);

        gridLayout->addWidget(posXLineEdit, 0, 1, 1, 1);

        posZLabel = new QLabel(posGroupBox);
        posZLabel->setObjectName(QString::fromUtf8("posZLabel"));
        sizePolicy2.setHeightForWidth(posZLabel->sizePolicy().hasHeightForWidth());
        posZLabel->setSizePolicy(sizePolicy2);
        posZLabel->setFont(font);
        posZLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(posZLabel, 2, 0, 1, 1);


        horizontalLayout_2->addWidget(posGroupBox);

        motionGroupBox = new QGroupBox(tab);
        motionGroupBox->setObjectName(QString::fromUtf8("motionGroupBox"));
        motionGroupBox->setFont(font);
        gridLayout_2 = new QGridLayout(motionGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        motionXLineEdit = new QLineEdit(motionGroupBox);
        motionXLineEdit->setObjectName(QString::fromUtf8("motionXLineEdit"));
        sizePolicy3.setHeightForWidth(motionXLineEdit->sizePolicy().hasHeightForWidth());
        motionXLineEdit->setSizePolicy(sizePolicy3);
        motionXLineEdit->setFont(font);

        gridLayout_2->addWidget(motionXLineEdit, 0, 1, 1, 1);

        motionXLabel = new QLabel(motionGroupBox);
        motionXLabel->setObjectName(QString::fromUtf8("motionXLabel"));
        sizePolicy2.setHeightForWidth(motionXLabel->sizePolicy().hasHeightForWidth());
        motionXLabel->setSizePolicy(sizePolicy2);
        motionXLabel->setFont(font);
        motionXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(motionXLabel, 0, 0, 1, 1);

        motionYLabel = new QLabel(motionGroupBox);
        motionYLabel->setObjectName(QString::fromUtf8("motionYLabel"));
        sizePolicy2.setHeightForWidth(motionYLabel->sizePolicy().hasHeightForWidth());
        motionYLabel->setSizePolicy(sizePolicy2);
        motionYLabel->setFont(font);
        motionYLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(motionYLabel, 1, 0, 1, 1);

        motionZLineEdit = new QLineEdit(motionGroupBox);
        motionZLineEdit->setObjectName(QString::fromUtf8("motionZLineEdit"));
        sizePolicy3.setHeightForWidth(motionZLineEdit->sizePolicy().hasHeightForWidth());
        motionZLineEdit->setSizePolicy(sizePolicy3);
        motionZLineEdit->setFont(font);

        gridLayout_2->addWidget(motionZLineEdit, 2, 1, 1, 1);

        motionYLineEdit = new QLineEdit(motionGroupBox);
        motionYLineEdit->setObjectName(QString::fromUtf8("motionYLineEdit"));
        sizePolicy3.setHeightForWidth(motionYLineEdit->sizePolicy().hasHeightForWidth());
        motionYLineEdit->setSizePolicy(sizePolicy3);
        motionYLineEdit->setFont(font);

        gridLayout_2->addWidget(motionYLineEdit, 1, 1, 1, 1);

        motionZLabel = new QLabel(motionGroupBox);
        motionZLabel->setObjectName(QString::fromUtf8("motionZLabel"));
        sizePolicy2.setHeightForWidth(motionZLabel->sizePolicy().hasHeightForWidth());
        motionZLabel->setSizePolicy(sizePolicy2);
        motionZLabel->setFont(font);
        motionZLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(motionZLabel, 2, 0, 1, 1);


        horizontalLayout_2->addWidget(motionGroupBox);


        horizontalLayout_12->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_12);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        bitLineEdit0 = new QLineEdit(groupBox_2);
        bitLineEdit0->setObjectName(QString::fromUtf8("bitLineEdit0"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bitLineEdit0->sizePolicy().hasHeightForWidth());
        bitLineEdit0->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(bitLineEdit0);

        bitLineEdit1 = new QLineEdit(groupBox_2);
        bitLineEdit1->setObjectName(QString::fromUtf8("bitLineEdit1"));

        horizontalLayout_4->addWidget(bitLineEdit1);

        bitLineEdit2 = new QLineEdit(groupBox_2);
        bitLineEdit2->setObjectName(QString::fromUtf8("bitLineEdit2"));
        sizePolicy4.setHeightForWidth(bitLineEdit2->sizePolicy().hasHeightForWidth());
        bitLineEdit2->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(bitLineEdit2);

        bitLineEdit3 = new QLineEdit(groupBox_2);
        bitLineEdit3->setObjectName(QString::fromUtf8("bitLineEdit3"));

        horizontalLayout_4->addWidget(bitLineEdit3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        copyBitPushButton = new QPushButton(groupBox_2);
        copyBitPushButton->setObjectName(QString::fromUtf8("copyBitPushButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(200);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(copyBitPushButton->sizePolicy().hasHeightForWidth());
        copyBitPushButton->setSizePolicy(sizePolicy5);
        copyBitPushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(copyBitPushButton);

        pasteBitPushButton = new QPushButton(groupBox_2);
        pasteBitPushButton->setObjectName(QString::fromUtf8("pasteBitPushButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pasteBitPushButton->sizePolicy().hasHeightForWidth());
        pasteBitPushButton->setSizePolicy(sizePolicy6);
        pasteBitPushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(pasteBitPushButton);

        genFromDestination = new QPushButton(groupBox_2);
        genFromDestination->setObjectName(QString::fromUtf8("genFromDestination"));
        sizePolicy6.setHeightForWidth(genFromDestination->sizePolicy().hasHeightForWidth());
        genFromDestination->setSizePolicy(sizePolicy6);
        genFromDestination->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(genFromDestination);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_2);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        yawComboBox = new QComboBox(groupBox_2);
        yawComboBox->addItem(QString());
        yawComboBox->addItem(QString());
        yawComboBox->addItem(QString());
        yawComboBox->addItem(QString());
        yawComboBox->setObjectName(QString::fromUtf8("yawComboBox"));

        horizontalLayout_9->addWidget(yawComboBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        gridLayout_10->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        amoutLabel1 = new QLabel(groupBox_2);
        amoutLabel1->setObjectName(QString::fromUtf8("amoutLabel1"));

        horizontalLayout_8->addWidget(amoutLabel1);

        amoutSpinBox1 = new QSpinBox(groupBox_2);
        amoutSpinBox1->setObjectName(QString::fromUtf8("amoutSpinBox1"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(amoutSpinBox1->sizePolicy().hasHeightForWidth());
        amoutSpinBox1->setSizePolicy(sizePolicy7);
        amoutSpinBox1->setMaximum(20);

        horizontalLayout_8->addWidget(amoutSpinBox1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        gridLayout_10->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        pitchComboBox = new QComboBox(groupBox_2);
        pitchComboBox->addItem(QString());
        pitchComboBox->addItem(QString());
        pitchComboBox->setObjectName(QString::fromUtf8("pitchComboBox"));

        horizontalLayout_6->addWidget(pitchComboBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        gridLayout_10->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        amoutLabel2 = new QLabel(groupBox_2);
        amoutLabel2->setObjectName(QString::fromUtf8("amoutLabel2"));

        horizontalLayout_7->addWidget(amoutLabel2);

        amoutSpinBox2 = new QSpinBox(groupBox_2);
        amoutSpinBox2->setObjectName(QString::fromUtf8("amoutSpinBox2"));
        sizePolicy7.setHeightForWidth(amoutSpinBox2->sizePolicy().hasHeightForWidth());
        amoutSpinBox2->setSizePolicy(sizePolicy7);
        amoutSpinBox2->setMaximum(20);

        horizontalLayout_7->addWidget(amoutSpinBox2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        gridLayout_10->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        calcFTLPushButton = new QPushButton(groupBox_2);
        calcFTLPushButton->setObjectName(QString::fromUtf8("calcFTLPushButton"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(calcFTLPushButton->sizePolicy().hasHeightForWidth());
        calcFTLPushButton->setSizePolicy(sizePolicy8);

        gridLayout_10->addWidget(calcFTLPushButton, 1, 3, 1, 1);

        isStartFromExplosionCheckBox = new QCheckBox(groupBox_2);
        isStartFromExplosionCheckBox->setObjectName(QString::fromUtf8("isStartFromExplosionCheckBox"));

        gridLayout_10->addWidget(isStartFromExplosionCheckBox, 0, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout_10);


        verticalLayout_7->addWidget(groupBox_2);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groundYLabel = new QLabel(tab_3);
        groundYLabel->setObjectName(QString::fromUtf8("groundYLabel"));
        groundYLabel->setFont(font);

        gridLayout_3->addWidget(groundYLabel, 0, 0, 1, 1);

        groundYLineEdit = new QLineEdit(tab_3);
        groundYLineEdit->setObjectName(QString::fromUtf8("groundYLineEdit"));
        groundYLineEdit->setFont(font);

        gridLayout_3->addWidget(groundYLineEdit, 0, 1, 1, 1);

        maxTickLabel = new QLabel(tab_3);
        maxTickLabel->setObjectName(QString::fromUtf8("maxTickLabel"));
        maxTickLabel->setFont(font);

        gridLayout_3->addWidget(maxTickLabel, 1, 0, 1, 1);

        maxTickLineEdit = new QLineEdit(tab_3);
        maxTickLineEdit->setObjectName(QString::fromUtf8("maxTickLineEdit"));
        maxTickLineEdit->setFont(font);

        gridLayout_3->addWidget(maxTickLineEdit, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        genOutputPushButton = new QPushButton(tab_3);
        genOutputPushButton->setObjectName(QString::fromUtf8("genOutputPushButton"));
        sizePolicy8.setHeightForWidth(genOutputPushButton->sizePolicy().hasHeightForWidth());
        genOutputPushButton->setSizePolicy(sizePolicy8);
        genOutputPushButton->setFont(font);

        horizontalLayout_3->addWidget(genOutputPushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        outputTableView = new QTableView(tab_3);
        outputTableView->setObjectName(QString::fromUtf8("outputTableView"));
        QFont font1;
        font1.setPointSize(11);
        outputTableView->setFont(font1);
        outputTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        outputTableView->setShowGrid(true);
        outputTableView->horizontalHeader()->setCascadingSectionResizes(false);
        outputTableView->horizontalHeader()->setMinimumSectionSize(25);
        outputTableView->horizontalHeader()->setDefaultSectionSize(107);

        verticalLayout_3->addWidget(outputTableView);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        languagePushButton = new QPushButton(centralWidget);
        languagePushButton->setObjectName(QString::fromUtf8("languagePushButton"));

        horizontalLayout_5->addWidget(languagePushButton);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);

        CreditLabel = new QLabel(centralWidget);
        CreditLabel->setObjectName(QString::fromUtf8("CreditLabel"));
        CreditLabel->setFont(font);
        CreditLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(CreditLabel);


        verticalLayout->addLayout(horizontalLayout_5);

        PearlCannonHelperClass->setCentralWidget(centralWidget);
        QWidget::setTabOrder(posYLineEdit, posZLineEdit);
        QWidget::setTabOrder(posZLineEdit, posXLineEdit);
        QWidget::setTabOrder(posXLineEdit, motionXLineEdit);
        QWidget::setTabOrder(motionXLineEdit, motionZLineEdit);
        QWidget::setTabOrder(motionZLineEdit, tabWidget);
        QWidget::setTabOrder(tabWidget, motionYLineEdit);
        QWidget::setTabOrder(motionYLineEdit, bitLineEdit0);
        QWidget::setTabOrder(bitLineEdit0, bitLineEdit1);
        QWidget::setTabOrder(bitLineEdit1, bitLineEdit2);
        QWidget::setTabOrder(bitLineEdit2, bitLineEdit3);
        QWidget::setTabOrder(bitLineEdit3, yawComboBox);
        QWidget::setTabOrder(yawComboBox, amoutSpinBox1);
        QWidget::setTabOrder(amoutSpinBox1, pitchComboBox);
        QWidget::setTabOrder(pitchComboBox, amoutSpinBox2);
        QWidget::setTabOrder(amoutSpinBox2, calcFTLPushButton);
        QWidget::setTabOrder(calcFTLPushButton, isStartFromExplosionCheckBox);
        QWidget::setTabOrder(isStartFromExplosionCheckBox, groundYLineEdit);
        QWidget::setTabOrder(groundYLineEdit, maxTickLineEdit);
        QWidget::setTabOrder(maxTickLineEdit, genOutputPushButton);
        QWidget::setTabOrder(genOutputPushButton, outputTableView);
        QWidget::setTabOrder(outputTableView, copyBitPushButton);
        QWidget::setTabOrder(copyBitPushButton, genFromDestination);
        QWidget::setTabOrder(genFromDestination, pasteBitPushButton);
        QWidget::setTabOrder(pasteBitPushButton, languagePushButton);

        retranslateUi(PearlCannonHelperClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PearlCannonHelperClass);
    } // setupUi

    void retranslateUi(QMainWindow *PearlCannonHelperClass)
    {
        PearlCannonHelperClass->setWindowTitle(QApplication::translate("PearlCannonHelperClass", "PearlCannonHelper", nullptr));
        posGroupBox->setTitle(QApplication::translate("PearlCannonHelperClass", "\345\235\220\346\240\207", nullptr));
        posYLabel->setText(QApplication::translate("PearlCannonHelperClass", "Y", nullptr));
        posYLineEdit->setText(QString());
        posXLabel->setText(QApplication::translate("PearlCannonHelperClass", "X", nullptr));
        posZLineEdit->setText(QString());
        posXLineEdit->setText(QString());
        posZLabel->setText(QApplication::translate("PearlCannonHelperClass", "Z", nullptr));
        motionGroupBox->setTitle(QApplication::translate("PearlCannonHelperClass", "\351\200\237\345\272\246", nullptr));
        motionXLineEdit->setText(QString());
        motionXLabel->setText(QApplication::translate("PearlCannonHelperClass", "X", nullptr));
        motionYLabel->setText(QApplication::translate("PearlCannonHelperClass", "Y", nullptr));
        motionZLineEdit->setText(QString());
        motionYLineEdit->setText(QString());
        motionZLabel->setText(QApplication::translate("PearlCannonHelperClass", "Z", nullptr));
        groupBox_2->setTitle(QApplication::translate("PearlCannonHelperClass", "TIS\347\237\242\351\207\217\347\217\215\347\217\240\347\202\256\351\205\215\347\275\256", nullptr));
        label_2->setText(QApplication::translate("PearlCannonHelperClass", "\344\272\214\350\277\233\345\210\266bit\345\272\217\345\210\227", nullptr));
        copyBitPushButton->setText(QApplication::translate("PearlCannonHelperClass", "\345\244\215\345\210\266bit\345\272\217\345\210\227", nullptr));
        pasteBitPushButton->setText(QApplication::translate("PearlCannonHelperClass", "\347\262\230\350\264\264bit\345\272\217\345\210\227", nullptr));
        genFromDestination->setText(QApplication::translate("PearlCannonHelperClass", "\344\273\216\347\233\256\347\232\204\345\234\260\347\224\237\346\210\220", nullptr));
        label_6->setText(QApplication::translate("PearlCannonHelperClass", "\345\207\272\345\260\204\346\260\264\345\271\263\346\226\271\345\220\221", nullptr));
        yawComboBox->setItemText(0, QApplication::translate("PearlCannonHelperClass", "\344\270\234", nullptr));
        yawComboBox->setItemText(1, QApplication::translate("PearlCannonHelperClass", "\345\215\227", nullptr));
        yawComboBox->setItemText(2, QApplication::translate("PearlCannonHelperClass", "\345\214\227", nullptr));
        yawComboBox->setItemText(3, QApplication::translate("PearlCannonHelperClass", "\350\245\277", nullptr));

        amoutLabel1->setText(QApplication::translate("PearlCannonHelperClass", "\346\265\205\347\201\260\344\276\247\347\277\274\345\215\225\345\205\203\346\225\260", nullptr));
        label_3->setText(QApplication::translate("PearlCannonHelperClass", "\345\207\272\345\260\204\344\277\257\344\273\260\346\226\271\345\220\221", nullptr));
        pitchComboBox->setItemText(0, QApplication::translate("PearlCannonHelperClass", "\346\212\233\345\260\204", nullptr));
        pitchComboBox->setItemText(1, QApplication::translate("PearlCannonHelperClass", "\345\271\263\345\260\204", nullptr));

        amoutLabel2->setText(QApplication::translate("PearlCannonHelperClass", "\346\267\261\347\201\260\344\276\247\347\277\274\345\215\225\345\205\203\346\225\260", nullptr));
        calcFTLPushButton->setText(QApplication::translate("PearlCannonHelperClass", "\350\256\241\347\256\227\345\210\235\347\212\266\346\200\201", nullptr));
        isStartFromExplosionCheckBox->setText(QApplication::translate("PearlCannonHelperClass", "\344\273\216TNT\347\210\206\347\202\270\347\232\204gt\345\274\200\345\247\213\346\250\241\346\213\237\350\275\250\350\277\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PearlCannonHelperClass", "\347\217\215\347\217\240\345\210\235\347\212\266\346\200\201", nullptr));
        groundYLabel->setText(QApplication::translate("PearlCannonHelperClass", "\345\234\260\351\235\242Y\345\200\274", nullptr));
        groundYLineEdit->setText(QApplication::translate("PearlCannonHelperClass", "128", nullptr));
        maxTickLabel->setText(QApplication::translate("PearlCannonHelperClass", "\346\234\200\345\244\247\350\277\255\344\273\243\345\210\273\346\225\260", nullptr));
        maxTickLineEdit->setText(QApplication::translate("PearlCannonHelperClass", "1000", nullptr));
        genOutputPushButton->setText(QApplication::translate("PearlCannonHelperClass", "\347\224\237\346\210\220\350\275\250\350\277\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PearlCannonHelperClass", "\347\217\215\347\217\240\350\275\250\350\277\271\350\276\223\345\207\272", nullptr));
        languagePushButton->setText(QApplication::translate("PearlCannonHelperClass", "\350\257\255\350\250\200\345\210\207\346\215\242", nullptr));
        CreditLabel->setText(QApplication::translate("PearlCannonHelperClass", "v2.0 by Fallen_Breath", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PearlCannonHelperClass: public Ui_PearlCannonHelperClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEARLCANNONHELPER_H
