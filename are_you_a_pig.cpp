#include "are_you_a_pig.h"
#include "ui_are_you_a_pig.h"
#include "be_a_pig.h"
#include "not_a_pig.h"
#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QTextCodec>

Are_You_A_Pig::Are_You_A_Pig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Are_You_A_Pig)
{
    ui->setupUi(this);

    //connect(ui->pushButton_1,SIGNAL(CLICKED()),this,SLOT(not_a_pig()));
}


Are_You_A_Pig::~Are_You_A_Pig()
{
    delete ui;
}


void Are_You_A_Pig::on_pushButton_1_clicked()
{
       Be_A_Pig *yes=new Be_A_Pig(this);
       yes->resize(450,300);
       yes -> show();

}



void Are_You_A_Pig::on_pushButton_2_clicked()
{
       Not_A_Pig *no=new Not_A_Pig(this);
       no->resize(450,300);
       no ->show();
}
