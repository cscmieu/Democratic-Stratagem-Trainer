
/**
 * @file StratagemWidget.cpp
 * @brief Implementation file for the StratagemWidget class.
 */

#include "StratagemWidget.h"

/**
 * @brief Constructs a StratagemWidget object.
 * @param name The name of the stratagem.
 * @param iconPath The path to the icon of the stratagem.
 * @param parent The parent widget.
 */
StratagemWidget::StratagemWidget(QString *name, QString* iconPath, QWidget *parent)
    : QPushButton(parent)
{
    setText(*name);
    QPixmap icon(*iconPath);
    setIcon(icon);
    setIconSize(QSize(50, 50));
    setFixedSize(50, 50);
}

/**
 * @brief Returns the stratagem associated with the widget when clicked.
 * @return The stratagem associated with the widget.
 */
Stratageme* StratagemWidget::onStratagemClicked()
{
    return content;
}