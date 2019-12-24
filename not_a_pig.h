#ifndef NOT_A_PIG_H
#define NOT_A_PIG_H

#include <QDialog>

namespace Ui {
class Not_A_Pig;
}

class Not_A_Pig : public QDialog
{
    Q_OBJECT

public:
    explicit Not_A_Pig(QWidget *parent = 0);
    ~Not_A_Pig();

private:
    Ui::Not_A_Pig *ui;
};

#endif // NOT_A_PIG_H
