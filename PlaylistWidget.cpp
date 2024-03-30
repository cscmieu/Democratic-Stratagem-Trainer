#include "PlaylistWidget.h"

PlaylistWidget::PlaylistWidget(QString name, QWidget *parent)
    : QPushButton(parent)
{
    setText(name);
}
