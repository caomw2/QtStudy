/********************************************************************************
** Form generated from reading UI file 'Test6_4A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST6_4A_H
#define UI_TEST6_4A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test6_4AClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *btnTest;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test6_4AClass)
    {
        if (Test6_4AClass->objectName().isEmpty())
            Test6_4AClass->setObjectName(QStringLiteral("Test6_4AClass"));
        Test6_4AClass->resize(600, 400);
        centralWidget = new QWidget(Test6_4AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 90, 181, 20));
        btnTest = new QPushButton(centralWidget);
        btnTest->setObjectName(QStringLiteral("btnTest"));
        btnTest->setGeometry(QRect(300, 90, 75, 23));
        Test6_4AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test6_4AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test6_4AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test6_4AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test6_4AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test6_4AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test6_4AClass->setStatusBar(statusBar);

        retranslateUi(Test6_4AClass);

        QMetaObject::connectSlotsByName(Test6_4AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test6_4AClass)
    {
        Test6_4AClass->setWindowTitle(QApplication::translate("Test6_4AClass", "Test6_4A", Q_NULLPTR));
        btnTest->setText(QApplication::translate("Test6_4AClass", "\346\265\213\350\257\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test6_4AClass: public Ui_Test6_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST6_4A_H
