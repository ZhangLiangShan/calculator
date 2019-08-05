#include "expr.h"
#include "model.h"
#include<qstring.h>

expr::expr(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(this->ui.btn_0, SIGNAL(clicked(bool)), this, SLOT(getBtn0()));
	connect(this->ui.btn_1, SIGNAL(clicked(bool)), this, SLOT(getBtn1()));
	connect(this->ui.btn_2, SIGNAL(clicked(bool)), this, SLOT(getBtn2()));
	connect(this->ui.btn_3, SIGNAL(clicked(bool)), this, SLOT(getBtn3()));
	connect(this->ui.btn_4, SIGNAL(clicked(bool)), this, SLOT(getBtn4()));
	connect(this->ui.btn_5, SIGNAL(clicked(bool)), this, SLOT(getBtn5()));
	connect(this->ui.btn_6, SIGNAL(clicked(bool)), this, SLOT(getBtn6()));
	connect(this->ui.btn_7, SIGNAL(clicked(bool)), this, SLOT(getBtn7()));
	connect(this->ui.btn_8, SIGNAL(clicked(bool)), this, SLOT(getBtn8()));
	connect(this->ui.btn_9, SIGNAL(clicked(bool)), this, SLOT(getBtn9()));

	connect(this->ui.btn_clean, SIGNAL(clicked(bool)), this, SLOT(getClean()));

	connect(this->ui.btn_add, SIGNAL(clicked(bool)), this, SLOT(getAdd()));
	connect(this->ui.btn_subtraction, SIGNAL(clicked(bool)), this, SLOT(getSub()));
	connect(this->ui.btn_multiplication, SIGNAL(clicked(bool)), this, SLOT(getMul()));
	connect(this->ui.btn_division, SIGNAL(clicked(bool)), this, SLOT(getDiv()));
	connect(this->ui.btn_equal, SIGNAL(clicked(bool)), this, SLOT(getEqual()));
	this->n_model = new model;
	this->tmp = "";//³õÊ¼»¯×Ö·û´®

}


void expr::getBtn0()
{
	if (this->tmp !="")
	{
		this->tmp+=this->ui.btn_0->text();
		this->ui.lbl_display->setText(this->tmp);
	}
	
}

void expr::getBtn1()
{
	this->tmp+=this->ui.btn_1->text();
	this->ui.lbl_display->setText(this->tmp);

}

void expr::getBtn2()
{
	this->tmp +=this->ui.btn_2->text();
	this->ui.lbl_display->setText(this->tmp);

}

void expr::getBtn3()
{
	this->tmp += this->ui.btn_3->text();
	this->ui.lbl_display->setText(this->tmp);
}

void expr::getBtn4()
{
	this->tmp += this->ui.btn_4->text();
	this->ui.lbl_display->setText(this->tmp);
}

void expr::getBtn5()
{
	this->tmp += this->ui.btn_5->text();
	this->ui.lbl_display->setText(this->tmp);
}

void expr::getBtn6()
{
	this->tmp += this->ui.btn_6->text();
	this->ui.lbl_display->setText(this->tmp);
}

void expr::getBtn7()
{
	this->tmp += this->ui.btn_7->text();
	this->ui.lbl_display->setText(this->tmp);
}

void expr::getBtn8()
{
	this->tmp += this->ui.btn_8->text();
	this->ui.lbl_display->setText(this->tmp);
}

void expr::getBtn9()
{
	this->tmp += this->ui.btn_9->text();
	this->ui.lbl_display->setText(this->tmp);
}

void expr::getClean()
{
	this->tmp = "";
	this->ui.lbl_display->setText(this->tmp);
}

void expr::getAdd()
{
	float num1 = this->tmp.toInt();
	this->n_model->setNum1(num1);
	this->tmp = "";
	QString flag = this->ui.btn_add->text();
	this->n_model->setFlag(flag);
}

void expr::getSub()
{
	float num1 = this->tmp.toInt();
	this->n_model->setNum1(num1);
	this->tmp = "";
	QString flag = this->ui.btn_subtraction->text();
	this->n_model->setFlag(flag);
}

void expr::getMul()
{
	float num1 = this->tmp.toInt();
	this->n_model->setNum1(num1);
	this->tmp = "";
	QString flag = this->ui.btn_multiplication->text();
	this->n_model->setFlag(flag);
}

void expr::getDiv()
{
	float num1 = this->tmp.toInt();
	this->n_model->setNum1(num1);
	this->tmp = "";
	QString flag = this->ui.btn_division->text();
	this->n_model->setFlag(flag);
}

void expr::getEqual()
{
	float num2 = this->tmp.toInt();
	this->n_model->setNum2(num2);

	QString result=this->n_model->doExper();
	this->ui.lbl_display->setText(result);
	this->tmp = "";
}