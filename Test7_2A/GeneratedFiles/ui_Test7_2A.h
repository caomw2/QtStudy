/********************************************************************************
** Form generated from reading UI file 'Test7_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST7_2A_H
#define UI_TEST7_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test7_2AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QTextEdit *plainText;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test7_2AClass)
    {
        if (Test7_2AClass->objectName().isEmpty())
            Test7_2AClass->setObjectName(QStringLiteral("Test7_2AClass"));
        Test7_2AClass->resize(600, 400);
        centralWidget = new QWidget(Test7_2AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnOpen = new QPushButton(centralWidget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        horizontalLayout->addWidget(btnOpen);

        btnSave = new QPushButton(centralWidget);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout->addWidget(btnSave);


        verticalLayout->addLayout(horizontalLayout);

        plainText = new QTextEdit(centralWidget);
        plainText->setObjectName(QStringLiteral("plainText"));

        verticalLayout->addWidget(plainText);

        Test7_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test7_2AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test7_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test7_2AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test7_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test7_2AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test7_2AClass->setStatusBar(statusBar);

        retranslateUi(Test7_2AClass);

        QMetaObject::connectSlotsByName(Test7_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test7_2AClass)
    {
        Test7_2AClass->setWindowTitle(QApplication::translate("Test7_2AClass", "Test7_2A", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("Test7_2AClass", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        btnSave->setText(QApplication::translate("Test7_2AClass", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test7_2AClass: public Ui_Test7_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST7_2A_H
