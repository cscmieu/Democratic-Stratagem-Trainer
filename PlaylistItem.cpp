
/**
 * @file PlaylistItem.cpp
 * @brief Implementation file for the PlaylistItem class.
 */

#include "PlaylistItem.h"
#include "ui_PlaylistItem.h"

/**
 * @brief Constructs a PlaylistItem object.
 * @param _playlistData Pointer to the PlaylistWidget object.
 * @param parent Pointer to the parent QWidget.
 */
PlaylistItem::PlaylistItem(PlaylistWidget* _playlistData, QWidget *parent)
    : QWidget(parent), ui(new Ui::PlaylistItem), playlistData(_playlistData)
{
    ui->setupUi(this);
    Playlist *playlist = playlistData->getPlaylist();
    ui->Name->setText(playlist->getName());
    QString difficulty_string = QString::number(playlist->getDifficulty());
    ui->Difficulty->setText(difficulty_string);
    auto stratagemsList = playlist->getAllStratagems();
    for(int i = 0; i < stratagemsList.count(); i++)
    {
        if (i<10)
        {
            QLabel *strat = new QLabel();
            strat->setText("Stratagem n°" + QString::number(stratagemsList[i].getId()));
            ui->Stratagems_1->addWidget(strat);
        }
        else if (i<20)
        {
            QLabel *strat = new QLabel();
            strat->setText("Stratagem n°" + QString::number(stratagemsList[i].getId()));
            ui->Stratagems_2->addWidget(strat);
        }
        else if (i<30)
        {
            QLabel *strat = new QLabel();
            strat->setText("Stratagem n°" + QString::number(stratagemsList[i].getId()));
            ui->Stratagems_3->addWidget(strat);
        }
    }
    
    QObject::connect(
        ui->AddStratagemButton, &QPushButton::clicked,
        this, &PlaylistItem::onAddStratagem);        
}

/**
 * @brief Destroys the PlaylistItem object.
 */
PlaylistItem::~PlaylistItem()
{
    delete ui;
}

/**
 * @brief Slot function called when the Add Stratagem button is clicked.
 * Prompts the user to enter a Stratagem ID and adds it to the playlist.
 */
void PlaylistItem::onAddStratagem()
{
    int stratagemId = QInputDialog::getInt(this, "Add Stratagem", "Enter Stratagem ID");
    int ok = playlistData->getPlaylist()->addStratageme(stratagemId);
    if (ok == 0) return;
    int i = playlistData->getPlaylist()->getAllStratagems().count() - 1;
    ui->Difficulty->setText(QString::number(playlistData->getPlaylist()->getDifficulty()));
    if (i<10)
    {
        QLabel *strat = new QLabel();
        strat->setText("Stratagem n°" + QString::number(stratagemId));
        ui->Stratagems_1->addWidget(strat);
    }
    else if (i<20)
    {
        QLabel *strat = new QLabel();
        strat->setText("Stratagem n°" + QString::number(stratagemId));
        ui->Stratagems_2->addWidget(strat);
    }
    else if (i<30)
    {
        QLabel *strat = new QLabel();
        strat->setText("Stratagem n°" + QString::number(stratagemId));
        ui->Stratagems_3->addWidget(strat);
    }
}
