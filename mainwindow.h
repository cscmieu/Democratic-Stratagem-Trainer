#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QInputDialog>
#include "playlist.h"

/**
 * @brief The QT_BEGIN_NAMESPACE macro is used to begin the Qt namespace.
 *
 * The Qt namespace is used to encapsulate all the classes, functions, and objects provided by the Qt framework.
 * The `QT_BEGIN_NAMESPACE` macro is used to indicate the start of the Qt namespace.
 * It is typically followed by the `namespace` keyword and the name of the namespace.
 * This macro is used to avoid naming conflicts and to organize the Qt framework's components.
 */
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
