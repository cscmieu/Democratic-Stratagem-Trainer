#include "StratagemWidget.h"

StratagemWidget::StratagemWidget(QString *name, QString* iconPath, QWidget *parent)
    : QPushButton(parent)
{
    setText(*name);
    QPixmap icon(*iconPath);
    setIcon(icon);
    setIconSize(QSize(50, 50));
    setFixedSize(50, 50);
}

Stratageme* StratagemWidget::onStratagemClicked()
{
    return content;
}