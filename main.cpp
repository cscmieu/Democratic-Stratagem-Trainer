#include "mainwindow.h"
#include <QApplication>
#include "stratagemeholder.h"

int main(int argc, char *argv[])
{

    StratagemeHolder stratagemes = StratagemeHolder(argv[1]);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
