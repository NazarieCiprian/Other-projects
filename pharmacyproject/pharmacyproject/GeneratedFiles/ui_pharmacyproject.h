/********************************************************************************
** Form generated from reading UI file 'pharmacyproject.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHARMACYPROJECT_H
#define UI_PHARMACYPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pharmacyprojectClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *adminMedicationList;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *medicationLabel;
    QLineEdit *medicationLineEdit;
    QLabel *concentrationLabel;
    QLineEdit *concentrationLineEdit;
    QLabel *producerLabel;
    QLineEdit *producerLineEdit;
    QLabel *stockLabel;
    QLineEdit *stockLineEdit;
    QLabel *valabilityDayLabel;
    QLineEdit *valabilityDayLineEdit;
    QLabel *valabilityMonthLabel;
    QLineEdit *valabilityMonthLineEdit;
    QLabel *valabilityYearLabel;
    QLineEdit *valabilityYearLineEdit;
    QLabel *priceLabel;
    QLineEdit *priceLineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *removeButton;
    QPushButton *addButton;
    QPushButton *updateButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *searchLineEdit;
    QPushButton *searhButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pharmacyprojectClass)
    {
        if (pharmacyprojectClass->objectName().isEmpty())
            pharmacyprojectClass->setObjectName(QStringLiteral("pharmacyprojectClass"));
        pharmacyprojectClass->resize(600, 574);
        centralWidget = new QWidget(pharmacyprojectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 251, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        adminMedicationList = new QListWidget(verticalLayoutWidget);
        adminMedicationList->setObjectName(QStringLiteral("adminMedicationList"));

        verticalLayout->addWidget(adminMedicationList);

        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(280, 20, 291, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        medicationLabel = new QLabel(formLayoutWidget);
        medicationLabel->setObjectName(QStringLiteral("medicationLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, medicationLabel);

        medicationLineEdit = new QLineEdit(formLayoutWidget);
        medicationLineEdit->setObjectName(QStringLiteral("medicationLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, medicationLineEdit);

        concentrationLabel = new QLabel(formLayoutWidget);
        concentrationLabel->setObjectName(QStringLiteral("concentrationLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, concentrationLabel);

        concentrationLineEdit = new QLineEdit(formLayoutWidget);
        concentrationLineEdit->setObjectName(QStringLiteral("concentrationLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, concentrationLineEdit);

        producerLabel = new QLabel(formLayoutWidget);
        producerLabel->setObjectName(QStringLiteral("producerLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, producerLabel);

        producerLineEdit = new QLineEdit(formLayoutWidget);
        producerLineEdit->setObjectName(QStringLiteral("producerLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, producerLineEdit);

        stockLabel = new QLabel(formLayoutWidget);
        stockLabel->setObjectName(QStringLiteral("stockLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, stockLabel);

        stockLineEdit = new QLineEdit(formLayoutWidget);
        stockLineEdit->setObjectName(QStringLiteral("stockLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, stockLineEdit);

        valabilityDayLabel = new QLabel(formLayoutWidget);
        valabilityDayLabel->setObjectName(QStringLiteral("valabilityDayLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, valabilityDayLabel);

        valabilityDayLineEdit = new QLineEdit(formLayoutWidget);
        valabilityDayLineEdit->setObjectName(QStringLiteral("valabilityDayLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, valabilityDayLineEdit);

        valabilityMonthLabel = new QLabel(formLayoutWidget);
        valabilityMonthLabel->setObjectName(QStringLiteral("valabilityMonthLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, valabilityMonthLabel);

        valabilityMonthLineEdit = new QLineEdit(formLayoutWidget);
        valabilityMonthLineEdit->setObjectName(QStringLiteral("valabilityMonthLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, valabilityMonthLineEdit);

        valabilityYearLabel = new QLabel(formLayoutWidget);
        valabilityYearLabel->setObjectName(QStringLiteral("valabilityYearLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, valabilityYearLabel);

        valabilityYearLineEdit = new QLineEdit(formLayoutWidget);
        valabilityYearLineEdit->setObjectName(QStringLiteral("valabilityYearLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, valabilityYearLineEdit);

        priceLabel = new QLabel(formLayoutWidget);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, priceLabel);

        priceLineEdit = new QLineEdit(formLayoutWidget);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, priceLineEdit);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(280, 250, 291, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        removeButton = new QPushButton(horizontalLayoutWidget);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        horizontalLayout->addWidget(removeButton);

        addButton = new QPushButton(horizontalLayoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout->addWidget(addButton);

        updateButton = new QPushButton(horizontalLayoutWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        horizontalLayout->addWidget(updateButton);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(280, 330, 291, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        searchLineEdit = new QLineEdit(verticalLayoutWidget_2);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));

        horizontalLayout_2->addWidget(searchLineEdit);

        searhButton = new QPushButton(verticalLayoutWidget_2);
        searhButton->setObjectName(QStringLiteral("searhButton"));

        horizontalLayout_2->addWidget(searhButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pharmacyprojectClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(pharmacyprojectClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        pharmacyprojectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pharmacyprojectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        pharmacyprojectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(pharmacyprojectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        pharmacyprojectClass->setStatusBar(statusBar);

        retranslateUi(pharmacyprojectClass);

        QMetaObject::connectSlotsByName(pharmacyprojectClass);
    } // setupUi

    void retranslateUi(QMainWindow *pharmacyprojectClass)
    {
        pharmacyprojectClass->setWindowTitle(QApplication::translate("pharmacyprojectClass", "pharmacyproject", 0));
        label->setText(QApplication::translate("pharmacyprojectClass", "Medication List", 0));
        medicationLabel->setText(QApplication::translate("pharmacyprojectClass", "Medication", 0));
        concentrationLabel->setText(QApplication::translate("pharmacyprojectClass", "Concentration", 0));
        producerLabel->setText(QApplication::translate("pharmacyprojectClass", "Producer", 0));
        stockLabel->setText(QApplication::translate("pharmacyprojectClass", "Stock", 0));
        valabilityDayLabel->setText(QApplication::translate("pharmacyprojectClass", "ValabilityDay", 0));
        valabilityMonthLabel->setText(QApplication::translate("pharmacyprojectClass", "ValabilityMonth", 0));
        valabilityYearLabel->setText(QApplication::translate("pharmacyprojectClass", "ValabilityYear", 0));
        priceLabel->setText(QApplication::translate("pharmacyprojectClass", "Price", 0));
        removeButton->setText(QApplication::translate("pharmacyprojectClass", "Remove", 0));
        addButton->setText(QApplication::translate("pharmacyprojectClass", "Add", 0));
        updateButton->setText(QApplication::translate("pharmacyprojectClass", "Update", 0));
        label_2->setText(QApplication::translate("pharmacyprojectClass", "Search Bar", 0));
        searhButton->setText(QApplication::translate("pharmacyprojectClass", "Search", 0));
    } // retranslateUi

};

namespace Ui {
    class pharmacyprojectClass: public Ui_pharmacyprojectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHARMACYPROJECT_H
