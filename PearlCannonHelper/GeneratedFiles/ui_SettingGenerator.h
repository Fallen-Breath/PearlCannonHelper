/********************************************************************************
** Form generated from reading UI file 'SettingGenerator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGGENERATOR_H
#define UI_SETTINGGENERATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingGenerator
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *posZLabel_2;
    QLineEdit *scrXLineEdit;
    QLabel *posXLabel_2;
    QLineEdit *scrZLineEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *posZLabel;
    QLineEdit *dstXLineEdit;
    QLabel *posXLabel;
    QLineEdit *dstZLineEdit;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_3;
    QLabel *maxUnitLabel;
    QSpinBox *maxUnitSpinBox;
    QLabel *groundYLabel;
    QLineEdit *groundYLineEdit;
    QLabel *maxTickLabel;
    QLineEdit *maxTickLineEdit;
    QLabel *label;
    QSpinBox *settingAmountSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *genPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *setPushButton;
    QLineEdit *chosenSettingLineEdit;
    QTableView *outputTableView;

    void setupUi(QWidget *SettingGenerator)
    {
        if (SettingGenerator->objectName().isEmpty())
            SettingGenerator->setObjectName(QString::fromUtf8("SettingGenerator"));
        SettingGenerator->resize(843, 449);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8(":/PearlCannonHelper/gear.ico")));
        SettingGenerator->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(SettingGenerator);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(SettingGenerator);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        groupBox_3->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        posZLabel_2 = new QLabel(groupBox_3);
        posZLabel_2->setObjectName(QString::fromUtf8("posZLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(posZLabel_2->sizePolicy().hasHeightForWidth());
        posZLabel_2->setSizePolicy(sizePolicy);
        posZLabel_2->setFont(font);
        posZLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(posZLabel_2, 1, 0, 1, 1);

        scrXLineEdit = new QLineEdit(groupBox_3);
        scrXLineEdit->setObjectName(QString::fromUtf8("scrXLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrXLineEdit->sizePolicy().hasHeightForWidth());
        scrXLineEdit->setSizePolicy(sizePolicy1);
        scrXLineEdit->setFont(font);
        scrXLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(scrXLineEdit, 0, 1, 1, 2);

        posXLabel_2 = new QLabel(groupBox_3);
        posXLabel_2->setObjectName(QString::fromUtf8("posXLabel_2"));
        sizePolicy.setHeightForWidth(posXLabel_2->sizePolicy().hasHeightForWidth());
        posXLabel_2->setSizePolicy(sizePolicy);
        posXLabel_2->setFont(font);
        posXLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(posXLabel_2, 0, 0, 1, 1);

        scrZLineEdit = new QLineEdit(groupBox_3);
        scrZLineEdit->setObjectName(QString::fromUtf8("scrZLineEdit"));
        sizePolicy1.setHeightForWidth(scrZLineEdit->sizePolicy().hasHeightForWidth());
        scrZLineEdit->setSizePolicy(sizePolicy1);
        scrZLineEdit->setFont(font);
        scrZLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(scrZLineEdit, 1, 1, 1, 2);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox = new QGroupBox(SettingGenerator);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        posZLabel = new QLabel(groupBox);
        posZLabel->setObjectName(QString::fromUtf8("posZLabel"));
        sizePolicy.setHeightForWidth(posZLabel->sizePolicy().hasHeightForWidth());
        posZLabel->setSizePolicy(sizePolicy);
        posZLabel->setFont(font);
        posZLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(posZLabel, 1, 0, 1, 1);

        dstXLineEdit = new QLineEdit(groupBox);
        dstXLineEdit->setObjectName(QString::fromUtf8("dstXLineEdit"));
        sizePolicy1.setHeightForWidth(dstXLineEdit->sizePolicy().hasHeightForWidth());
        dstXLineEdit->setSizePolicy(sizePolicy1);
        dstXLineEdit->setFont(font);

        gridLayout->addWidget(dstXLineEdit, 0, 1, 1, 2);

        posXLabel = new QLabel(groupBox);
        posXLabel->setObjectName(QString::fromUtf8("posXLabel"));
        sizePolicy.setHeightForWidth(posXLabel->sizePolicy().hasHeightForWidth());
        posXLabel->setSizePolicy(sizePolicy);
        posXLabel->setFont(font);
        posXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(posXLabel, 0, 0, 1, 1);

        dstZLineEdit = new QLineEdit(groupBox);
        dstZLineEdit->setObjectName(QString::fromUtf8("dstZLineEdit"));
        sizePolicy1.setHeightForWidth(dstZLineEdit->sizePolicy().hasHeightForWidth());
        dstZLineEdit->setSizePolicy(sizePolicy1);
        dstZLineEdit->setFont(font);

        gridLayout->addWidget(dstZLineEdit, 1, 1, 1, 2);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(SettingGenerator);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font1;
        font1.setPointSize(11);
        groupBox_2->setFont(font1);
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        maxUnitLabel = new QLabel(groupBox_2);
        maxUnitLabel->setObjectName(QString::fromUtf8("maxUnitLabel"));
        sizePolicy.setHeightForWidth(maxUnitLabel->sizePolicy().hasHeightForWidth());
        maxUnitLabel->setSizePolicy(sizePolicy);
        maxUnitLabel->setFont(font);
        maxUnitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(maxUnitLabel, 0, 0, 1, 1);

        maxUnitSpinBox = new QSpinBox(groupBox_2);
        maxUnitSpinBox->setObjectName(QString::fromUtf8("maxUnitSpinBox"));
        maxUnitSpinBox->setMaximum(20);
        maxUnitSpinBox->setValue(20);

        gridLayout_3->addWidget(maxUnitSpinBox, 0, 1, 1, 1);

        groundYLabel = new QLabel(groupBox_2);
        groundYLabel->setObjectName(QString::fromUtf8("groundYLabel"));
        groundYLabel->setFont(font);

        gridLayout_3->addWidget(groundYLabel, 1, 0, 1, 1);

        groundYLineEdit = new QLineEdit(groupBox_2);
        groundYLineEdit->setObjectName(QString::fromUtf8("groundYLineEdit"));
        groundYLineEdit->setFont(font);

        gridLayout_3->addWidget(groundYLineEdit, 1, 1, 1, 1);

        maxTickLabel = new QLabel(groupBox_2);
        maxTickLabel->setObjectName(QString::fromUtf8("maxTickLabel"));
        maxTickLabel->setFont(font);

        gridLayout_3->addWidget(maxTickLabel, 2, 0, 1, 1);

        maxTickLineEdit = new QLineEdit(groupBox_2);
        maxTickLineEdit->setObjectName(QString::fromUtf8("maxTickLineEdit"));
        maxTickLineEdit->setFont(font);

        gridLayout_3->addWidget(maxTickLineEdit, 2, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 3, 0, 1, 1);

        settingAmountSpinBox = new QSpinBox(groupBox_2);
        settingAmountSpinBox->setObjectName(QString::fromUtf8("settingAmountSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(settingAmountSpinBox->sizePolicy().hasHeightForWidth());
        settingAmountSpinBox->setSizePolicy(sizePolicy2);
        settingAmountSpinBox->setMinimum(1);
        settingAmountSpinBox->setMaximum(20);
        settingAmountSpinBox->setValue(5);

        gridLayout_3->addWidget(settingAmountSpinBox, 3, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);


        verticalLayout_3->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        genPushButton = new QPushButton(SettingGenerator);
        genPushButton->setObjectName(QString::fromUtf8("genPushButton"));
        genPushButton->setFont(font1);

        horizontalLayout->addWidget(genPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        setPushButton = new QPushButton(SettingGenerator);
        setPushButton->setObjectName(QString::fromUtf8("setPushButton"));
        setPushButton->setFont(font1);

        horizontalLayout->addWidget(setPushButton);

        chosenSettingLineEdit = new QLineEdit(SettingGenerator);
        chosenSettingLineEdit->setObjectName(QString::fromUtf8("chosenSettingLineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(chosenSettingLineEdit->sizePolicy().hasHeightForWidth());
        chosenSettingLineEdit->setSizePolicy(sizePolicy3);
        chosenSettingLineEdit->setMinimumSize(QSize(220, 0));
        chosenSettingLineEdit->setFont(font1);

        horizontalLayout->addWidget(chosenSettingLineEdit);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        outputTableView = new QTableView(SettingGenerator);
        outputTableView->setObjectName(QString::fromUtf8("outputTableView"));
        outputTableView->setFont(font1);

        verticalLayout_4->addWidget(outputTableView);


        retranslateUi(SettingGenerator);

        QMetaObject::connectSlotsByName(SettingGenerator);
    } // setupUi

    void retranslateUi(QWidget *SettingGenerator)
    {
        SettingGenerator->setWindowTitle(QApplication::translate("SettingGenerator", "SettingGenerator", nullptr));
        groupBox_3->setTitle(QApplication::translate("SettingGenerator", "\345\207\272\345\217\221\345\234\260", nullptr));
        posZLabel_2->setText(QApplication::translate("SettingGenerator", "Z", nullptr));
        scrXLineEdit->setText(QString());
        posXLabel_2->setText(QApplication::translate("SettingGenerator", "X", nullptr));
        scrZLineEdit->setText(QString());
        groupBox->setTitle(QApplication::translate("SettingGenerator", "\347\233\256\347\232\204\345\234\260", nullptr));
        posZLabel->setText(QApplication::translate("SettingGenerator", "Z", nullptr));
        dstXLineEdit->setText(QApplication::translate("SettingGenerator", "1000", nullptr));
        posXLabel->setText(QApplication::translate("SettingGenerator", "X", nullptr));
        dstZLineEdit->setText(QApplication::translate("SettingGenerator", "2000", nullptr));
        groupBox_2->setTitle(QApplication::translate("SettingGenerator", "\351\231\220\345\210\266", nullptr));
        maxUnitLabel->setText(QApplication::translate("SettingGenerator", "\346\234\200\345\244\247\345\215\225\345\205\203\346\225\260", nullptr));
        groundYLabel->setText(QApplication::translate("SettingGenerator", "\345\234\260\351\235\242Y\345\200\274", nullptr));
        groundYLineEdit->setText(QApplication::translate("SettingGenerator", "128", nullptr));
        maxTickLabel->setText(QApplication::translate("SettingGenerator", "\346\234\200\345\244\247\350\277\255\344\273\243\345\210\273\346\225\260", nullptr));
        maxTickLineEdit->setText(QApplication::translate("SettingGenerator", "1000", nullptr));
        label->setText(QApplication::translate("SettingGenerator", "\347\224\237\346\210\220\351\205\215\347\275\256\346\225\260\351\207\217", nullptr));
        genPushButton->setText(QApplication::translate("SettingGenerator", "\347\224\237\346\210\220\351\205\215\347\275\256", nullptr));
        setPushButton->setText(QApplication::translate("SettingGenerator", "\347\241\256\350\256\244\351\205\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingGenerator: public Ui_SettingGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGGENERATOR_H
