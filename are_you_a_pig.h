#ifndef ARE_YOU_A_PIG_H
#define ARE_YOU_A_PIG_H

#include <QWidget>

namespace Ui {
class Are_You_A_Pig;
}

class Are_You_A_Pig : public QWidget
{
    Q_OBJECT

public:
    explicit Are_You_A_Pig(QWidget *parent = 0);
    ~Are_You_A_Pig();

private:
    Ui::Are_You_A_Pig *ui;


private slots:

    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();

};

#endif // ARE_YOU_A_PIG_H
