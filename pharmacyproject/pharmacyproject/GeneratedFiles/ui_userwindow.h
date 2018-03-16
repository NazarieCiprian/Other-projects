/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *medicationList;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *clientList;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *addToClients;
    QPushButton *saveClients;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *searchLineEdit;
    QPushButton *searhButton;

    void setupUi(QWidget *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName(QStringLiteral("UserWindow"));
        UserWindow->resize(652, 565);
        verticalLayoutWidget = new QWidget(UserWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 70, 241, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        medicationList = new QListWidget(verticalLayoutWidget);
        medicationList->setObjectName(QStringLiteral("medicationList"));

        verticalLayout->addWidget(medicationList);

        verticalLayoutWidget_2 = new QWidget(UserWindow);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(390, 70, 251, 481));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        clientList = new QListWidget(verticalLayoutWidget_2);
        clientList->setObjectName(QStringLiteral("clientList"));

        verticalLayout_2->addWidget(clientList);

        gridLayoutWidget = new QWidget(UserWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(250, 210, 141, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addToClients = new QPushButton(gridLayoutWidget);
        addToClients->setObjectName(QStringLiteral("addToClients"));

        gridLayout->addWidget(addToClients, 0, 0, 1, 1);

        saveClients = new QPushButton(gridLayoutWidget);
        saveClients->setObjectName(QStringLiteral("saveClients"));

        gridLayout->addWidget(saveClients, 1, 0, 1, 1);

        verticalLayoutWidget_3 = new QWidget(UserWindow);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(180, 10, 291, 61));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        searchLineEdit = new QLineEdit(verticalLayoutWidget_3);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));

        horizontalLayout_2->addWidget(searchLineEdit);

        searhButton = new QPushButton(verticalLayoutWidget_3);
        searhButton->setObjectName(QStringLiteral("searhButton"));

        horizontalLayout_2->addWidget(searhButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QWidget *UserWindow)
    {
        UserWindow->setWindowTitle(QApplication::translate("UserWindow", "UserWindow", 0));
        label->setText(QApplication::translate("UserWindow", "Medication List", 0));
        label_2->setText(QApplication::translate("UserWindow", "Clients List", 0));
        addToClients->setText(QApplication::translate("UserWindow", "AddtoClients", 0));
        saveClients->setText(QApplication::translate("UserWindow", "SaveClients", 0));
        label_3->setText(QApplication::translate("UserWindow", "Search Bar", 0));
        searhButton->setText(QApplication::translate("UserWindow", "Search", 0));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
