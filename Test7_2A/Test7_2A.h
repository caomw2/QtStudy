#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test7_2A.h"

class Test7_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test7_2A(QWidget *parent = Q_NULLPTR);
	

private:
	Ui::Test7_2AClass ui;

	private slots:

	int OnBtnOpen();
	int OnBtnSave();
};
