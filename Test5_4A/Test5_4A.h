#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test5_4A.h"

class Test5_4A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_4A(QWidget *parent = Q_NULLPTR);

	private slots:

	int OnBtnHelp();


private:
	Ui::Test5_4AClass ui;
};
