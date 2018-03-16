/********************************************************************************
** Form generated from reading UI file 'quizv2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZV2_H
#define UI_QUIZV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
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

class Ui_quizv2Class
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *questionList;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *easyButton;
    QPushButton *mediumButton;
    QPushButton *hardButtom;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *aLineEdit;
    QCheckBox *acheck;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *bLineEdit;
    QCheckBox *bcheck;
    QHBoxLayout *horizontalLayout;
    QLineEdit *dLineEdit;
    QCheckBox *dcheck;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *cLineEdit;
    QCheckBox *ccheck;
    QPushButton *submitButton;
    QPushButton *finishButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *questionLabel;
    QLineEdit *questionLineEdit;
    QLabel *answerALabel;
    QLineEdit *answerALineEdit;
    QLabel *answerBLabel;
    QLineEdit *answerBLineEdit;
    QLabel *answerCLabel;
    QLineEdit *answerCLineEdit;
    QLabel *answerDLabel;
    QLineEdit *answerDLineEdit;
    QLabel *correctAnswerLabel;
    QLineEdit *correctAnswerLineEdit;
    QLabel *difficultyLabel;
    QLineEdit *difficultyLineEdit;
    QLabel *pointsLabel;
    QLineEdit *pointsLineEdit;
    QPushButton *addButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *quizv2Class)
    {
        if (quizv2Class->objectName().isEmpty())
            quizv2Class->setObjectName(QStringLiteral("quizv2Class"));
        quizv2Class->resize(512, 607);
        centralWidget = new QWidget(quizv2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 221, 411));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        questionList = new QListWidget(verticalLayoutWidget);
        questionList->setObjectName(QStringLiteral("questionList"));

        verticalLayout->addWidget(questionList);

        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(250, 10, 241, 83));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        easyButton = new QPushButton(gridLayoutWidget);
        easyButton->setObjectName(QStringLiteral("easyButton"));

        gridLayout->addWidget(easyButton, 0, 0, 1, 1);

        mediumButton = new QPushButton(gridLayoutWidget);
        mediumButton->setObjectName(QStringLiteral("mediumButton"));

        gridLayout->addWidget(mediumButton, 1, 0, 1, 1);

        hardButtom = new QPushButton(gridLayoutWidget);
        hardButtom->setObjectName(QStringLiteral("hardButtom"));

        gridLayout->addWidget(hardButtom, 2, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(250, 110, 231, 151));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        aLineEdit = new QLineEdit(gridLayoutWidget_2);
        aLineEdit->setObjectName(QStringLiteral("aLineEdit"));

        horizontalLayout_4->addWidget(aLineEdit);

        acheck = new QCheckBox(gridLayoutWidget_2);
        acheck->setObjectName(QStringLiteral("acheck"));

        horizontalLayout_4->addWidget(acheck);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bLineEdit = new QLineEdit(gridLayoutWidget_2);
        bLineEdit->setObjectName(QStringLiteral("bLineEdit"));

        horizontalLayout_2->addWidget(bLineEdit);

        bcheck = new QCheckBox(gridLayoutWidget_2);
        bcheck->setObjectName(QStringLiteral("bcheck"));

        horizontalLayout_2->addWidget(bcheck);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dLineEdit = new QLineEdit(gridLayoutWidget_2);
        dLineEdit->setObjectName(QStringLiteral("dLineEdit"));

        horizontalLayout->addWidget(dLineEdit);

        dcheck = new QCheckBox(gridLayoutWidget_2);
        dcheck->setObjectName(QStringLiteral("dcheck"));

        horizontalLayout->addWidget(dcheck);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cLineEdit = new QLineEdit(gridLayoutWidget_2);
        cLineEdit->setObjectName(QStringLiteral("cLineEdit"));

        horizontalLayout_3->addWidget(cLineEdit);

        ccheck = new QCheckBox(gridLayoutWidget_2);
        ccheck->setObjectName(QStringLiteral("ccheck"));

        horizontalLayout_3->addWidget(ccheck);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        submitButton = new QPushButton(centralWidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(250, 270, 75, 23));
        finishButton = new QPushButton(centralWidget);
        finishButton->setObjectName(QStringLiteral("finishButton"));
        finishButton->setGeometry(QRect(330, 270, 75, 23));
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(250, 300, 241, 241));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        questionLabel = new QLabel(formLayoutWidget);
        questionLabel->setObjectName(QStringLiteral("questionLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, questionLabel);

        questionLineEdit = new QLineEdit(formLayoutWidget);
        questionLineEdit->setObjectName(QStringLiteral("questionLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, questionLineEdit);

        answerALabel = new QLabel(formLayoutWidget);
        answerALabel->setObjectName(QStringLiteral("answerALabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, answerALabel);

        answerALineEdit = new QLineEdit(formLayoutWidget);
        answerALineEdit->setObjectName(QStringLiteral("answerALineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, answerALineEdit);

        answerBLabel = new QLabel(formLayoutWidget);
        answerBLabel->setObjectName(QStringLiteral("answerBLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, answerBLabel);

        answerBLineEdit = new QLineEdit(formLayoutWidget);
        answerBLineEdit->setObjectName(QStringLiteral("answerBLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, answerBLineEdit);

        answerCLabel = new QLabel(formLayoutWidget);
        answerCLabel->setObjectName(QStringLiteral("answerCLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, answerCLabel);

        answerCLineEdit = new QLineEdit(formLayoutWidget);
        answerCLineEdit->setObjectName(QStringLiteral("answerCLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, answerCLineEdit);

        answerDLabel = new QLabel(formLayoutWidget);
        answerDLabel->setObjectName(QStringLiteral("answerDLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, answerDLabel);

        answerDLineEdit = new QLineEdit(formLayoutWidget);
        answerDLineEdit->setObjectName(QStringLiteral("answerDLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, answerDLineEdit);

        correctAnswerLabel = new QLabel(formLayoutWidget);
        correctAnswerLabel->setObjectName(QStringLiteral("correctAnswerLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, correctAnswerLabel);

        correctAnswerLineEdit = new QLineEdit(formLayoutWidget);
        correctAnswerLineEdit->setObjectName(QStringLiteral("correctAnswerLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, correctAnswerLineEdit);

        difficultyLabel = new QLabel(formLayoutWidget);
        difficultyLabel->setObjectName(QStringLiteral("difficultyLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, difficultyLabel);

        difficultyLineEdit = new QLineEdit(formLayoutWidget);
        difficultyLineEdit->setObjectName(QStringLiteral("difficultyLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, difficultyLineEdit);

        pointsLabel = new QLabel(formLayoutWidget);
        pointsLabel->setObjectName(QStringLiteral("pointsLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, pointsLabel);

        pointsLineEdit = new QLineEdit(formLayoutWidget);
        pointsLineEdit->setObjectName(QStringLiteral("pointsLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, pointsLineEdit);

        addButton = new QPushButton(formLayoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        formLayout->setWidget(8, QFormLayout::LabelRole, addButton);

        quizv2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(quizv2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 512, 21));
        quizv2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(quizv2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        quizv2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(quizv2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        quizv2Class->setStatusBar(statusBar);

        retranslateUi(quizv2Class);

        QMetaObject::connectSlotsByName(quizv2Class);
    } // setupUi

    void retranslateUi(QMainWindow *quizv2Class)
    {
        quizv2Class->setWindowTitle(QApplication::translate("quizv2Class", "quizv2", 0));
        easyButton->setText(QApplication::translate("quizv2Class", "Easy", 0));
        mediumButton->setText(QApplication::translate("quizv2Class", "Medium", 0));
        hardButtom->setText(QApplication::translate("quizv2Class", "Hard", 0));
        acheck->setText(QApplication::translate("quizv2Class", "A", 0));
        bcheck->setText(QApplication::translate("quizv2Class", "B", 0));
        dcheck->setText(QApplication::translate("quizv2Class", "D", 0));
        ccheck->setText(QApplication::translate("quizv2Class", "C", 0));
        submitButton->setText(QApplication::translate("quizv2Class", "Submit", 0));
        finishButton->setText(QApplication::translate("quizv2Class", "Finish", 0));
        questionLabel->setText(QApplication::translate("quizv2Class", "Question", 0));
        answerALabel->setText(QApplication::translate("quizv2Class", "Answer A", 0));
        answerBLabel->setText(QApplication::translate("quizv2Class", "Answer B", 0));
        answerCLabel->setText(QApplication::translate("quizv2Class", "Answer C", 0));
        answerDLabel->setText(QApplication::translate("quizv2Class", "Answer D", 0));
        correctAnswerLabel->setText(QApplication::translate("quizv2Class", "Correct Answer", 0));
        difficultyLabel->setText(QApplication::translate("quizv2Class", "Difficulty", 0));
        pointsLabel->setText(QApplication::translate("quizv2Class", "Points", 0));
        addButton->setText(QApplication::translate("quizv2Class", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class quizv2Class: public Ui_quizv2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZV2_H
