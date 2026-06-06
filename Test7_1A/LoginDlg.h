#pragma once

#include <QWidget>
#include <QDialog>
#include "ui_LoginDlg.h"


class LoginDlg : public QDialog
{
	Q_OBJECT

public:
	LoginDlg(const char * str, QWidget *parent = Q_NULLPTR);
	~LoginDlg();

	private slots:
	int OnBtnOK();
	int OnBtnCancel();

public:

	QString mUser;
	QString mPasswd;

private:
	Ui::LoginDlg ui;

	
};
