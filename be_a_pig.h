#ifndef BE_A_PIG_H
#define BE_A_PIG_H

#include <QDialog>

namespace Ui {
class Be_A_Pig;
}

class Be_A_Pig : public QDialog
{
    Q_OBJECT

public:
    explicit Be_A_Pig(QWidget *parent = 0);
    ~Be_A_Pig();

private:
    Ui::Be_A_Pig *ui;
};

#endif // BE_A_PIG_H
