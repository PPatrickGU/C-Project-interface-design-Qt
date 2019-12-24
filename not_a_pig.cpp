#include "not_a_pig.h"
#include "ui_not_a_pig.h"

Not_A_Pig::Not_A_Pig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Not_A_Pig)
{
    ui->setupUi(this);
}

Not_A_Pig::~Not_A_Pig()
{
    delete ui;
}
