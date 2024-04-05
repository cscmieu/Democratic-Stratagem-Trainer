#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QInputDialog>
#include "playlist.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:


    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

    void onAddPlaylist();

    void onRemovePlaylist();

    void onClickPlaylist();

    Playlist* importPlaylist(QString* path);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
