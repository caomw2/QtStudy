/********************************************************************************
** Form generated from reading UI file 'Test5_5A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_5A_H
#define UI_TEST5_5A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_5AClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_5AClass)
    {
        if (Test5_5AClass->objectName().isEmpty())
            Test5_5AClass->setObjectName(QStringLiteral("Test5_5AClass"));
        Test5_5AClass->resize(600, 400);
        centralWidget = new QWidget(Test5_5AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 110, 131, 171));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Test5_5A/Resources/cmw.jpg")));
        label->setScaledContents(false);
        Test5_5AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_5AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test5_5AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_5AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test5_5AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_5AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test5_5AClass->setStatusBar(statusBar);

        retranslateUi(Test5_5AClass);

        QMetaObject::connectSlotsByName(Test5_5AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_5AClass)
    {
        Test5_5AClass->setWindowTitle(QApplication::translate("Test5_5AClass", "Test5_5A", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Test5_5AClass: public Ui_Test5_5AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_5A_H
