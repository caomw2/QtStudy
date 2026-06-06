#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test6_4A.h"

class Test6_4A : public QMainWindow
{
	Q_OBJECT

public:
	Test6_4A(QWidget *parent = Q_NULLPTR);


	private slots:
	int OnBtnTest();

private:
	Ui::Test6_4AClass ui;
};
