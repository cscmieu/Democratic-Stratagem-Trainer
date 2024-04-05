#include "PlaylistItem.h"
#include "ui_PlaylistItem.h"

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

    // QObject::connect(
    //     ui->Export, &QPushButton::clicked,
    //     this, &playlistData->getPlaylist()->exportPlaylist);
        
    }

PlaylistItem::~PlaylistItem()
{
    delete ui;
}

void PlaylistItem::onAddStratagem()
{
    int stratagemId = QInputDialog::getInt(this, "Add Stratagem", "Enter Stratagem ID");
    playlistData->getPlaylist()->addStratageme(stratagemId);
    int i = playlistData->getPlaylist()->getAllStratagems().count() - 1;
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
