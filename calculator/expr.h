#pragma once

#include <QtWidgets/QDialog>
#include "ui_expr.h"
#include<qstring.h>
#include "model.h"
class expr : public QDialog
{
	Q_OBJECT

public:
	expr(QWidget *parent = Q_NULLPTR);

private:
	Ui::exprClass ui;
	model *n_model;
	QString tmp;//´¢´æ×Ö·û´®

private slots:
	void getBtn0();
	void getBtn1();
	void getBtn2();
	void getBtn3();
	void getBtn4();
	void getBtn5();
	void getBtn6();
	void getBtn7();
	void getBtn8();
	void getBtn9();

	void getClean();
	void getAdd();
	void getSub();
	void getMul();
	void getDiv();

	void getEqual();
};
