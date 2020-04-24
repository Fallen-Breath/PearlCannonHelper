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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PearlCannonHelperClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLineEdit *pearlZLineEdit;
    QLabel *rotationLabel;
    QLineEdit *pearlXLineEdit;
    QLabel *pearlZLabel;
    QLineEdit *PlayerYLineEdit;
    QComboBox *rotationComboBox;
    QLabel *pearlXLabel;
    QLabel *PlayerYLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *posZLabel_3;
    QLineEdit *dstXLineEdit;
    QLabel *posXLabel_3;
    QLineEdit *dstZLineEdit;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *maxUnitLabel;
    QLabel *groundYLabel_2;
    QLineEdit *maxTickLineEdit_2;
    QLineEdit *groundYLineEdit_2;
    QSpinBox *maxTNTSpinBox;
    QLabel *maxTickLabel_2;
    QLineEdit *selectedSettingBitsLineEdit;
    QGridLayout *gridLayout_7;
    QPushButton *applyPushButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *genPushButton;
    QSpacerItem *horizontalSpacer_6;
    QTableWidget *settingTableWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
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
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QLabel *groundYLabel;
    QLineEdit *groundYLineEdit;
    QLabel *maxTickLabel;
    QLineEdit *maxTickLineEdit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *bitLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *copyBitPushButton;
    QPushButton *pasteBitPushButton;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *amoutLabel1;
    QSpinBox *amoutSpinBox1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *amoutLabel2;
    QSpinBox *amoutSpinBox2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *pitchComboBox;
    QCheckBox *isStartFromExplosionCheckBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QComboBox *directionComboBox;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *displayMomentumCheckBox;
    QTableWidget *traceTableWidget;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *languageComboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *CreditLabel;

    void setupUi(QMainWindow *PearlCannonHelperClass)
    {
        if (PearlCannonHelperClass->objectName().isEmpty())
            PearlCannonHelperClass->setObjectName(QString::fromUtf8("PearlCannonHelperClass"));
        PearlCannonHelperClass->resize(561, 743);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PearlCannonHelperClass->sizePolicy().hasHeightForWidth());
        PearlCannonHelperClass->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/PearlCannonHelper/exe_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PearlCannonHelperClass->setWindowIcon(icon);
        centralWidget = new QWidget(PearlCannonHelperClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_7 = new QVBoxLayout(centralWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font;
        font.setPointSize(9);
        tabWidget->setFont(font);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(9);
        groupBox_3->setFont(font1);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pearlZLineEdit = new QLineEdit(groupBox_3);
        pearlZLineEdit->setObjectName(QString::fromUtf8("pearlZLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pearlZLineEdit->sizePolicy().hasHeightForWidth());
        pearlZLineEdit->setSizePolicy(sizePolicy2);
        pearlZLineEdit->setFont(font1);
        pearlZLineEdit->setReadOnly(false);

        gridLayout_4->addWidget(pearlZLineEdit, 1, 1, 1, 2);

        rotationLabel = new QLabel(groupBox_3);
        rotationLabel->setObjectName(QString::fromUtf8("rotationLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rotationLabel->sizePolicy().hasHeightForWidth());
        rotationLabel->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(rotationLabel, 3, 0, 1, 2);

        pearlXLineEdit = new QLineEdit(groupBox_3);
        pearlXLineEdit->setObjectName(QString::fromUtf8("pearlXLineEdit"));
        sizePolicy2.setHeightForWidth(pearlXLineEdit->sizePolicy().hasHeightForWidth());
        pearlXLineEdit->setSizePolicy(sizePolicy2);
        pearlXLineEdit->setFont(font1);
        pearlXLineEdit->setReadOnly(false);

        gridLayout_4->addWidget(pearlXLineEdit, 0, 1, 1, 2);

        pearlZLabel = new QLabel(groupBox_3);
        pearlZLabel->setObjectName(QString::fromUtf8("pearlZLabel"));
        sizePolicy3.setHeightForWidth(pearlZLabel->sizePolicy().hasHeightForWidth());
        pearlZLabel->setSizePolicy(sizePolicy3);
        pearlZLabel->setFont(font1);
        pearlZLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(pearlZLabel, 1, 0, 1, 1);

        PlayerYLineEdit = new QLineEdit(groupBox_3);
        PlayerYLineEdit->setObjectName(QString::fromUtf8("PlayerYLineEdit"));
        sizePolicy2.setHeightForWidth(PlayerYLineEdit->sizePolicy().hasHeightForWidth());
        PlayerYLineEdit->setSizePolicy(sizePolicy2);
        PlayerYLineEdit->setMinimumSize(QSize(0, 0));
        PlayerYLineEdit->setMaximumSize(QSize(16777215, 16777215));
        PlayerYLineEdit->setFont(font);

        gridLayout_4->addWidget(PlayerYLineEdit, 2, 1, 1, 2);

        rotationComboBox = new QComboBox(groupBox_3);
        rotationComboBox->addItem(QString());
        rotationComboBox->addItem(QString());
        rotationComboBox->addItem(QString());
        rotationComboBox->addItem(QString());
        rotationComboBox->setObjectName(QString::fromUtf8("rotationComboBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(rotationComboBox->sizePolicy().hasHeightForWidth());
        rotationComboBox->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(rotationComboBox, 3, 2, 1, 1);

        pearlXLabel = new QLabel(groupBox_3);
        pearlXLabel->setObjectName(QString::fromUtf8("pearlXLabel"));
        sizePolicy3.setHeightForWidth(pearlXLabel->sizePolicy().hasHeightForWidth());
        pearlXLabel->setSizePolicy(sizePolicy3);
        pearlXLabel->setFont(font1);
        pearlXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(pearlXLabel, 0, 0, 1, 1);

        PlayerYLabel = new QLabel(groupBox_3);
        PlayerYLabel->setObjectName(QString::fromUtf8("PlayerYLabel"));
        PlayerYLabel->setFont(font);

        gridLayout_4->addWidget(PlayerYLabel, 2, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font1);
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        posZLabel_3 = new QLabel(groupBox);
        posZLabel_3->setObjectName(QString::fromUtf8("posZLabel_3"));
        sizePolicy3.setHeightForWidth(posZLabel_3->sizePolicy().hasHeightForWidth());
        posZLabel_3->setSizePolicy(sizePolicy3);
        posZLabel_3->setFont(font1);
        posZLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(posZLabel_3, 1, 0, 1, 1);

        dstXLineEdit = new QLineEdit(groupBox);
        dstXLineEdit->setObjectName(QString::fromUtf8("dstXLineEdit"));
        sizePolicy2.setHeightForWidth(dstXLineEdit->sizePolicy().hasHeightForWidth());
        dstXLineEdit->setSizePolicy(sizePolicy2);
        dstXLineEdit->setFont(font1);

        gridLayout_5->addWidget(dstXLineEdit, 0, 1, 1, 2);

        posXLabel_3 = new QLabel(groupBox);
        posXLabel_3->setObjectName(QString::fromUtf8("posXLabel_3"));
        sizePolicy3.setHeightForWidth(posXLabel_3->sizePolicy().hasHeightForWidth());
        posXLabel_3->setSizePolicy(sizePolicy3);
        posXLabel_3->setFont(font1);
        posXLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(posXLabel_3, 0, 0, 1, 1);

        dstZLineEdit = new QLineEdit(groupBox);
        dstZLineEdit->setObjectName(QString::fromUtf8("dstZLineEdit"));
        sizePolicy2.setHeightForWidth(dstZLineEdit->sizePolicy().hasHeightForWidth());
        dstZLineEdit->setSizePolicy(sizePolicy2);
        dstZLineEdit->setFont(font1);

        gridLayout_5->addWidget(dstZLineEdit, 1, 1, 1, 2);


        verticalLayout_4->addWidget(groupBox);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setFont(font);
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        maxUnitLabel = new QLabel(groupBox_4);
        maxUnitLabel->setObjectName(QString::fromUtf8("maxUnitLabel"));
        sizePolicy3.setHeightForWidth(maxUnitLabel->sizePolicy().hasHeightForWidth());
        maxUnitLabel->setSizePolicy(sizePolicy3);
        maxUnitLabel->setFont(font1);
        maxUnitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(maxUnitLabel, 0, 0, 1, 1);

        groundYLabel_2 = new QLabel(groupBox_4);
        groundYLabel_2->setObjectName(QString::fromUtf8("groundYLabel_2"));
        groundYLabel_2->setFont(font1);

        gridLayout_6->addWidget(groundYLabel_2, 1, 0, 1, 1);

        maxTickLineEdit_2 = new QLineEdit(groupBox_4);
        maxTickLineEdit_2->setObjectName(QString::fromUtf8("maxTickLineEdit_2"));
        maxTickLineEdit_2->setFont(font1);

        gridLayout_6->addWidget(maxTickLineEdit_2, 2, 1, 1, 1);

        groundYLineEdit_2 = new QLineEdit(groupBox_4);
        groundYLineEdit_2->setObjectName(QString::fromUtf8("groundYLineEdit_2"));
        groundYLineEdit_2->setFont(font1);

        gridLayout_6->addWidget(groundYLineEdit_2, 1, 1, 1, 1);

        maxTNTSpinBox = new QSpinBox(groupBox_4);
        maxTNTSpinBox->setObjectName(QString::fromUtf8("maxTNTSpinBox"));
        maxTNTSpinBox->setFont(font);
        maxTNTSpinBox->setMaximum(1820);
        maxTNTSpinBox->setValue(1040);

        gridLayout_6->addWidget(maxTNTSpinBox, 0, 1, 1, 1);

        maxTickLabel_2 = new QLabel(groupBox_4);
        maxTickLabel_2->setObjectName(QString::fromUtf8("maxTickLabel_2"));
        maxTickLabel_2->setFont(font1);

        gridLayout_6->addWidget(maxTickLabel_2, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        selectedSettingBitsLineEdit = new QLineEdit(tab_2);
        selectedSettingBitsLineEdit->setObjectName(QString::fromUtf8("selectedSettingBitsLineEdit"));
        selectedSettingBitsLineEdit->setReadOnly(true);

        verticalLayout->addWidget(selectedSettingBitsLineEdit);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        applyPushButton = new QPushButton(tab_2);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setFont(font);

        gridLayout_7->addWidget(applyPushButton, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        genPushButton = new QPushButton(tab_2);
        genPushButton->setObjectName(QString::fromUtf8("genPushButton"));
        sizePolicy2.setHeightForWidth(genPushButton->sizePolicy().hasHeightForWidth());
        genPushButton->setSizePolicy(sizePolicy2);
        genPushButton->setFont(font);

        gridLayout_7->addWidget(genPushButton, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_7);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout_5);

        settingTableWidget = new QTableWidget(tab_2);
        settingTableWidget->setObjectName(QString::fromUtf8("settingTableWidget"));

        verticalLayout_5->addWidget(settingTableWidget);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        posGroupBox = new QGroupBox(tab);
        posGroupBox->setObjectName(QString::fromUtf8("posGroupBox"));
        sizePolicy1.setHeightForWidth(posGroupBox->sizePolicy().hasHeightForWidth());
        posGroupBox->setSizePolicy(sizePolicy1);
        posGroupBox->setFont(font1);
        gridLayout = new QGridLayout(posGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        posYLabel = new QLabel(posGroupBox);
        posYLabel->setObjectName(QString::fromUtf8("posYLabel"));
        sizePolicy3.setHeightForWidth(posYLabel->sizePolicy().hasHeightForWidth());
        posYLabel->setSizePolicy(sizePolicy3);
        posYLabel->setFont(font1);
        posYLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(posYLabel, 1, 0, 1, 1);

        posYLineEdit = new QLineEdit(posGroupBox);
        posYLineEdit->setObjectName(QString::fromUtf8("posYLineEdit"));
        sizePolicy2.setHeightForWidth(posYLineEdit->sizePolicy().hasHeightForWidth());
        posYLineEdit->setSizePolicy(sizePolicy2);
        posYLineEdit->setFont(font1);

        gridLayout->addWidget(posYLineEdit, 1, 1, 1, 1);

        posXLabel = new QLabel(posGroupBox);
        posXLabel->setObjectName(QString::fromUtf8("posXLabel"));
        sizePolicy3.setHeightForWidth(posXLabel->sizePolicy().hasHeightForWidth());
        posXLabel->setSizePolicy(sizePolicy3);
        posXLabel->setFont(font1);
        posXLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(posXLabel, 0, 0, 1, 1);

        posZLineEdit = new QLineEdit(posGroupBox);
        posZLineEdit->setObjectName(QString::fromUtf8("posZLineEdit"));
        sizePolicy2.setHeightForWidth(posZLineEdit->sizePolicy().hasHeightForWidth());
        posZLineEdit->setSizePolicy(sizePolicy2);
        posZLineEdit->setFont(font1);

        gridLayout->addWidget(posZLineEdit, 2, 1, 1, 1);

        posXLineEdit = new QLineEdit(posGroupBox);
        posXLineEdit->setObjectName(QString::fromUtf8("posXLineEdit"));
        sizePolicy2.setHeightForWidth(posXLineEdit->sizePolicy().hasHeightForWidth());
        posXLineEdit->setSizePolicy(sizePolicy2);
        posXLineEdit->setFont(font1);

        gridLayout->addWidget(posXLineEdit, 0, 1, 1, 1);

        posZLabel = new QLabel(posGroupBox);
        posZLabel->setObjectName(QString::fromUtf8("posZLabel"));
        sizePolicy3.setHeightForWidth(posZLabel->sizePolicy().hasHeightForWidth());
        posZLabel->setSizePolicy(sizePolicy3);
        posZLabel->setFont(font1);
        posZLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(posZLabel, 2, 0, 1, 1);


        horizontalLayout_2->addWidget(posGroupBox);

        motionGroupBox = new QGroupBox(tab);
        motionGroupBox->setObjectName(QString::fromUtf8("motionGroupBox"));
        motionGroupBox->setFont(font1);
        gridLayout_2 = new QGridLayout(motionGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        motionXLineEdit = new QLineEdit(motionGroupBox);
        motionXLineEdit->setObjectName(QString::fromUtf8("motionXLineEdit"));
        sizePolicy2.setHeightForWidth(motionXLineEdit->sizePolicy().hasHeightForWidth());
        motionXLineEdit->setSizePolicy(sizePolicy2);
        motionXLineEdit->setFont(font1);

        gridLayout_2->addWidget(motionXLineEdit, 0, 1, 1, 1);

        motionXLabel = new QLabel(motionGroupBox);
        motionXLabel->setObjectName(QString::fromUtf8("motionXLabel"));
        sizePolicy3.setHeightForWidth(motionXLabel->sizePolicy().hasHeightForWidth());
        motionXLabel->setSizePolicy(sizePolicy3);
        motionXLabel->setFont(font1);
        motionXLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(motionXLabel, 0, 0, 1, 1);

        motionYLabel = new QLabel(motionGroupBox);
        motionYLabel->setObjectName(QString::fromUtf8("motionYLabel"));
        sizePolicy3.setHeightForWidth(motionYLabel->sizePolicy().hasHeightForWidth());
        motionYLabel->setSizePolicy(sizePolicy3);
        motionYLabel->setFont(font1);
        motionYLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(motionYLabel, 1, 0, 1, 1);

        motionZLineEdit = new QLineEdit(motionGroupBox);
        motionZLineEdit->setObjectName(QString::fromUtf8("motionZLineEdit"));
        sizePolicy2.setHeightForWidth(motionZLineEdit->sizePolicy().hasHeightForWidth());
        motionZLineEdit->setSizePolicy(sizePolicy2);
        motionZLineEdit->setFont(font1);

        gridLayout_2->addWidget(motionZLineEdit, 2, 1, 1, 1);

        motionYLineEdit = new QLineEdit(motionGroupBox);
        motionYLineEdit->setObjectName(QString::fromUtf8("motionYLineEdit"));
        sizePolicy2.setHeightForWidth(motionYLineEdit->sizePolicy().hasHeightForWidth());
        motionYLineEdit->setSizePolicy(sizePolicy2);
        motionYLineEdit->setFont(font1);

        gridLayout_2->addWidget(motionYLineEdit, 1, 1, 1, 1);

        motionZLabel = new QLabel(motionGroupBox);
        motionZLabel->setObjectName(QString::fromUtf8("motionZLabel"));
        sizePolicy3.setHeightForWidth(motionZLabel->sizePolicy().hasHeightForWidth());
        motionZLabel->setSizePolicy(sizePolicy3);
        motionZLabel->setFont(font1);
        motionZLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(motionZLabel, 2, 0, 1, 1);


        horizontalLayout_2->addWidget(motionGroupBox);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groundYLabel = new QLabel(groupBox_5);
        groundYLabel->setObjectName(QString::fromUtf8("groundYLabel"));
        groundYLabel->setFont(font1);

        gridLayout_8->addWidget(groundYLabel, 0, 0, 1, 1);

        groundYLineEdit = new QLineEdit(groupBox_5);
        groundYLineEdit->setObjectName(QString::fromUtf8("groundYLineEdit"));
        groundYLineEdit->setFont(font1);

        gridLayout_8->addWidget(groundYLineEdit, 0, 1, 1, 1);

        maxTickLabel = new QLabel(groupBox_5);
        maxTickLabel->setObjectName(QString::fromUtf8("maxTickLabel"));
        maxTickLabel->setFont(font1);

        gridLayout_8->addWidget(maxTickLabel, 1, 0, 1, 1);

        maxTickLineEdit = new QLineEdit(groupBox_5);
        maxTickLineEdit->setObjectName(QString::fromUtf8("maxTickLineEdit"));
        maxTickLineEdit->setFont(font1);

        gridLayout_8->addWidget(maxTickLineEdit, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_5);


        verticalLayout_6->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);
        label_2->setFont(font);

        horizontalLayout_4->addWidget(label_2);

        bitLineEdit = new QLineEdit(groupBox_2);
        bitLineEdit->setObjectName(QString::fromUtf8("bitLineEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(bitLineEdit->sizePolicy().hasHeightForWidth());
        bitLineEdit->setSizePolicy(sizePolicy6);
        bitLineEdit->setFont(font);

        horizontalLayout_4->addWidget(bitLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        copyBitPushButton = new QPushButton(groupBox_2);
        copyBitPushButton->setObjectName(QString::fromUtf8("copyBitPushButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(200);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(copyBitPushButton->sizePolicy().hasHeightForWidth());
        copyBitPushButton->setSizePolicy(sizePolicy7);
        copyBitPushButton->setMinimumSize(QSize(100, 0));
        copyBitPushButton->setFont(font);

        horizontalLayout->addWidget(copyBitPushButton);

        pasteBitPushButton = new QPushButton(groupBox_2);
        pasteBitPushButton->setObjectName(QString::fromUtf8("pasteBitPushButton"));
        sizePolicy5.setHeightForWidth(pasteBitPushButton->sizePolicy().hasHeightForWidth());
        pasteBitPushButton->setSizePolicy(sizePolicy5);
        pasteBitPushButton->setMinimumSize(QSize(100, 0));
        pasteBitPushButton->setFont(font);

        horizontalLayout->addWidget(pasteBitPushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        amoutLabel1 = new QLabel(groupBox_2);
        amoutLabel1->setObjectName(QString::fromUtf8("amoutLabel1"));
        amoutLabel1->setFont(font);

        horizontalLayout_8->addWidget(amoutLabel1);

        amoutSpinBox1 = new QSpinBox(groupBox_2);
        amoutSpinBox1->setObjectName(QString::fromUtf8("amoutSpinBox1"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(amoutSpinBox1->sizePolicy().hasHeightForWidth());
        amoutSpinBox1->setSizePolicy(sizePolicy8);
        amoutSpinBox1->setFont(font);
        amoutSpinBox1->setMaximum(1820);

        horizontalLayout_8->addWidget(amoutSpinBox1);


        gridLayout_3->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        amoutLabel2 = new QLabel(groupBox_2);
        amoutLabel2->setObjectName(QString::fromUtf8("amoutLabel2"));
        amoutLabel2->setFont(font);

        horizontalLayout_7->addWidget(amoutLabel2);

        amoutSpinBox2 = new QSpinBox(groupBox_2);
        amoutSpinBox2->setObjectName(QString::fromUtf8("amoutSpinBox2"));
        sizePolicy8.setHeightForWidth(amoutSpinBox2->sizePolicy().hasHeightForWidth());
        amoutSpinBox2->setSizePolicy(sizePolicy8);
        amoutSpinBox2->setFont(font);
        amoutSpinBox2->setMaximum(1820);

        horizontalLayout_7->addWidget(amoutSpinBox2);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_6->addWidget(label_3);

        pitchComboBox = new QComboBox(groupBox_2);
        pitchComboBox->addItem(QString());
        pitchComboBox->addItem(QString());
        pitchComboBox->setObjectName(QString::fromUtf8("pitchComboBox"));
        pitchComboBox->setFont(font);

        horizontalLayout_6->addWidget(pitchComboBox);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        isStartFromExplosionCheckBox = new QCheckBox(groupBox_2);
        isStartFromExplosionCheckBox->setObjectName(QString::fromUtf8("isStartFromExplosionCheckBox"));
        isStartFromExplosionCheckBox->setFont(font);

        gridLayout_3->addWidget(isStartFromExplosionCheckBox, 0, 2, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_9->addWidget(label_6);

        directionComboBox = new QComboBox(groupBox_2);
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->setObjectName(QString::fromUtf8("directionComboBox"));
        directionComboBox->setFont(font);

        horizontalLayout_9->addWidget(directionComboBox);


        gridLayout_3->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        displayMomentumCheckBox = new QCheckBox(groupBox_2);
        displayMomentumCheckBox->setObjectName(QString::fromUtf8("displayMomentumCheckBox"));
        displayMomentumCheckBox->setFont(font);
        displayMomentumCheckBox->setChecked(true);
        displayMomentumCheckBox->setTristate(false);

        horizontalLayout_11->addWidget(displayMomentumCheckBox);


        gridLayout_3->addLayout(horizontalLayout_11, 1, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);


        verticalLayout_6->addWidget(groupBox_2);

        traceTableWidget = new QTableWidget(tab);
        traceTableWidget->setObjectName(QString::fromUtf8("traceTableWidget"));

        verticalLayout_6->addWidget(traceTableWidget);

        tabWidget->addTab(tab, QString());

        verticalLayout_7->addWidget(tabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        languageComboBox = new QComboBox(centralWidget);
        languageComboBox->addItem(QString());
        languageComboBox->addItem(QString());
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));
        sizePolicy5.setHeightForWidth(languageComboBox->sizePolicy().hasHeightForWidth());
        languageComboBox->setSizePolicy(sizePolicy5);
        languageComboBox->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(languageComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        CreditLabel = new QLabel(centralWidget);
        CreditLabel->setObjectName(QString::fromUtf8("CreditLabel"));
        CreditLabel->setFont(font1);
        CreditLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(CreditLabel);


        verticalLayout_7->addLayout(horizontalLayout_3);

        PearlCannonHelperClass->setCentralWidget(centralWidget);

        retranslateUi(PearlCannonHelperClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PearlCannonHelperClass);
    } // setupUi

    void retranslateUi(QMainWindow *PearlCannonHelperClass)
    {
        PearlCannonHelperClass->setWindowTitle(QApplication::translate("PearlCannonHelperClass", "PearlCannonHelper", nullptr));
        groupBox_3->setTitle(QApplication::translate("PearlCannonHelperClass", "360FTLH information", nullptr));
        pearlZLineEdit->setText(QApplication::translate("PearlCannonHelperClass", "-55.9375", nullptr));
#ifndef QT_NO_TOOLTIP
        rotationLabel->setToolTip(QApplication::translate("PearlCannonHelperClass", "If you have rotated the machine when building it", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        rotationLabel->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        rotationLabel->setText(QApplication::translate("PearlCannonHelperClass", "Roation", nullptr));
        pearlXLineEdit->setText(QApplication::translate("PearlCannonHelperClass", "-155.0625", nullptr));
#ifndef QT_NO_TOOLTIP
        pearlZLabel->setToolTip(QApplication::translate("PearlCannonHelperClass", "The z coordinate of the aligned pearl", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pearlZLabel->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pearlZLabel->setText(QApplication::translate("PearlCannonHelperClass", "Pearl Z", nullptr));
        PlayerYLineEdit->setText(QApplication::translate("PearlCannonHelperClass", "64", nullptr));
        rotationComboBox->setItemText(0, QApplication::translate("PearlCannonHelperClass", "None", nullptr));
        rotationComboBox->setItemText(1, QApplication::translate("PearlCannonHelperClass", "CW_90", nullptr));
        rotationComboBox->setItemText(2, QApplication::translate("PearlCannonHelperClass", "CW_180", nullptr));
        rotationComboBox->setItemText(3, QApplication::translate("PearlCannonHelperClass", "CCW_90", nullptr));

#ifndef QT_NO_TOOLTIP
        pearlXLabel->setToolTip(QApplication::translate("PearlCannonHelperClass", "The x coordinate of the aligned pearl", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pearlXLabel->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pearlXLabel->setText(QApplication::translate("PearlCannonHelperClass", "Pearl X", nullptr));
#ifndef QT_NO_TOOLTIP
        PlayerYLabel->setToolTip(QApplication::translate("PearlCannonHelperClass", "The y value of the player entity when he's ready to throw the pearl", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        PlayerYLabel->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        PlayerYLabel->setText(QApplication::translate("PearlCannonHelperClass", "Player Y", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("PearlCannonHelperClass", "Where you want to go", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("PearlCannonHelperClass", "Destination", nullptr));
        posZLabel_3->setText(QApplication::translate("PearlCannonHelperClass", "Z", nullptr));
        dstXLineEdit->setText(QApplication::translate("PearlCannonHelperClass", "1000", nullptr));
        posXLabel_3->setText(QApplication::translate("PearlCannonHelperClass", "X", nullptr));
        dstZLineEdit->setText(QApplication::translate("PearlCannonHelperClass", "4000", nullptr));
        groupBox_4->setTitle(QApplication::translate("PearlCannonHelperClass", "Restriction", nullptr));
        maxUnitLabel->setText(QApplication::translate("PearlCannonHelperClass", "Maximum TNT", nullptr));
#ifndef QT_NO_TOOLTIP
        groundYLabel_2->setToolTip(QApplication::translate("PearlCannonHelperClass", "The ground y value. If you are above bedrock use 128", nullptr));
#endif // QT_NO_TOOLTIP
        groundYLabel_2->setText(QApplication::translate("PearlCannonHelperClass", "Ground Y", nullptr));
        maxTickLineEdit_2->setText(QApplication::translate("PearlCannonHelperClass", "1000", nullptr));
        groundYLineEdit_2->setText(QApplication::translate("PearlCannonHelperClass", "64", nullptr));
#ifndef QT_NO_TOOLTIP
        maxTickLabel_2->setToolTip(QApplication::translate("PearlCannonHelperClass", "Maximum simulating time", nullptr));
#endif // QT_NO_TOOLTIP
        maxTickLabel_2->setText(QApplication::translate("PearlCannonHelperClass", "Max tick time", nullptr));
#ifndef QT_NO_TOOLTIP
        applyPushButton->setToolTip(QApplication::translate("PearlCannonHelperClass", "Apply selected setting", nullptr));
#endif // QT_NO_TOOLTIP
        applyPushButton->setText(QApplication::translate("PearlCannonHelperClass", "Apply", nullptr));
#ifndef QT_NO_TOOLTIP
        genPushButton->setToolTip(QApplication::translate("PearlCannonHelperClass", "Generate recommended settings", nullptr));
#endif // QT_NO_TOOLTIP
        genPushButton->setText(QApplication::translate("PearlCannonHelperClass", "Generate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PearlCannonHelperClass", "Setting Generator", nullptr));
        posGroupBox->setTitle(QApplication::translate("PearlCannonHelperClass", "Coordinate", nullptr));
        posYLabel->setText(QApplication::translate("PearlCannonHelperClass", "Y", nullptr));
        posYLineEdit->setText(QString());
        posXLabel->setText(QApplication::translate("PearlCannonHelperClass", "X", nullptr));
        posZLineEdit->setText(QString());
        posXLineEdit->setText(QString());
        posZLabel->setText(QApplication::translate("PearlCannonHelperClass", "Z", nullptr));
        motionGroupBox->setTitle(QApplication::translate("PearlCannonHelperClass", "Momentum", nullptr));
        motionXLineEdit->setText(QString());
        motionXLabel->setText(QApplication::translate("PearlCannonHelperClass", "X", nullptr));
        motionYLabel->setText(QApplication::translate("PearlCannonHelperClass", "Y", nullptr));
        motionZLineEdit->setText(QString());
        motionYLineEdit->setText(QString());
        motionZLabel->setText(QApplication::translate("PearlCannonHelperClass", "Z", nullptr));
        groupBox_5->setTitle(QApplication::translate("PearlCannonHelperClass", "Restriction", nullptr));
        groundYLabel->setText(QApplication::translate("PearlCannonHelperClass", "Ground Y", nullptr));
        groundYLineEdit->setText(QApplication::translate("PearlCannonHelperClass", "64", nullptr));
        maxTickLabel->setText(QApplication::translate("PearlCannonHelperClass", "Max tick time", nullptr));
        maxTickLineEdit->setText(QApplication::translate("PearlCannonHelperClass", "1000", nullptr));
        groupBox_2->setTitle(QApplication::translate("PearlCannonHelperClass", "360FTLH Setting", nullptr));
        label_2->setText(QApplication::translate("PearlCannonHelperClass", "Bits", nullptr));
        copyBitPushButton->setText(QApplication::translate("PearlCannonHelperClass", "Copy bits", nullptr));
        pasteBitPushButton->setText(QApplication::translate("PearlCannonHelperClass", "Paste bits", nullptr));
        amoutLabel1->setText(QApplication::translate("PearlCannonHelperClass", "Light gray", nullptr));
        amoutLabel2->setText(QApplication::translate("PearlCannonHelperClass", "Dark gray", nullptr));
        label_3->setText(QApplication::translate("PearlCannonHelperClass", "Pitch", nullptr));
        pitchComboBox->setItemText(0, QApplication::translate("PearlCannonHelperClass", "0 (Horizon)", nullptr));
        pitchComboBox->setItemText(1, QApplication::translate("PearlCannonHelperClass", "1 (Projectile)", nullptr));

        isStartFromExplosionCheckBox->setText(QApplication::translate("PearlCannonHelperClass", "Starts at explosion", nullptr));
        label_6->setText(QApplication::translate("PearlCannonHelperClass", "Direction", nullptr));
        directionComboBox->setItemText(0, QApplication::translate("PearlCannonHelperClass", "00 (0)", nullptr));
        directionComboBox->setItemText(1, QApplication::translate("PearlCannonHelperClass", "01 (1)", nullptr));
        directionComboBox->setItemText(2, QApplication::translate("PearlCannonHelperClass", "10 (2)", nullptr));
        directionComboBox->setItemText(3, QApplication::translate("PearlCannonHelperClass", "11 (3)", nullptr));

        displayMomentumCheckBox->setText(QApplication::translate("PearlCannonHelperClass", "Display Momentum", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PearlCannonHelperClass", "Trace Simulator", nullptr));
        languageComboBox->setItemText(0, QApplication::translate("PearlCannonHelperClass", "en", nullptr));
        languageComboBox->setItemText(1, QApplication::translate("PearlCannonHelperClass", "zh", nullptr));

        CreditLabel->setText(QApplication::translate("PearlCannonHelperClass", "v3.2 by Fallen_Breath", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PearlCannonHelperClass: public Ui_PearlCannonHelperClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEARLCANNONHELPER_H
