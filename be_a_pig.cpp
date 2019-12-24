#include "be_a_pig.h"
#include "ui_be_a_pig.h"

Be_A_Pig::Be_A_Pig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Be_A_Pig)
{
    ui->setupUi(this);
}

Be_A_Pig::~Be_A_Pig()
{
    delete ui;
}
