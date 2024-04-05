/**
 * @file main.cpp
 * @brief Entry point of the application.
 */

#include "mainwindow.h"
#include <QApplication>

/**
 * @brief The main function of the application.
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line arguments.
 * @return The exit code of the application.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
