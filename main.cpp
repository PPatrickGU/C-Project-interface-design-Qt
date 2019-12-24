#include "are_you_a_pig.h"
#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    #if (QT_VERSION >= QT_VERSION_CHECK(5,9,0))
        QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    #endif

    QApplication a(argc, argv);
    Are_You_A_Pig w;
    w.resize(500,400);
    w.show();

    return a.exec();
}
