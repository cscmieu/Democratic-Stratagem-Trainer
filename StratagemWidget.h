#ifndef STRATAGEMWIDGET_H
#define STRATAGEMWIDGET_H

#include "./stratageme.h"
#include <QPushButton>
#include <QObject>
#include <QPixmap>

class StratagemWidget : public QPushButton
{
    Q_OBJECT
public:
    explicit StratagemWidget(QString *name, QString* iconPath, QWidget *parent = nullptr);
    Stratageme* onStratagemClicked();
private:
    Stratageme* content;
signals:    
};

#endif //STRATAGEMWIDGET_H