/**
 * @file StratagemWidget.h
 * @brief Header file for the StratagemWidget class.
 */
#ifndef STRATAGEMWIDGET_H
#define STRATAGEMWIDGET_H

#include "./stratageme.h"
#include <QPushButton>
#include <QObject>
#include <QPixmap>

/**
 * @brief The StratagemWidget class represents a custom QPushButton widget for displaying a stratagem.
 *
 * This class inherits from QPushButton and provides additional functionality for displaying a stratagem.
 * It allows the user to click on the button and retrieve the associated stratagem object.
 */
class StratagemWidget : public QPushButton
{
    Q_OBJECT
public:
    /**
     * @brief Constructs a StratagemWidget object with the given name, icon path, and parent widget.
     *
     * @param name The name of the stratagem.
     * @param iconPath The path to the icon representing the stratagem.
     * @param parent The parent widget.
     */
    explicit StratagemWidget(QString *name, QString* iconPath, QWidget *parent = nullptr);

    /**
     * @brief Retrieves the stratagem object associated with the button when it is clicked.
     *
     * @return The stratagem object associated with the button.
     */
    Stratageme* onStratagemClicked();

private:
    Stratageme* content;
signals:
};

#endif // STRATAGEMWIDGET_H
