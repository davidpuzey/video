#include "inc/controldialog.h"
#include "inc/settingsdialog.h"

ControlDialog::ControlDialog()
{
    /* Window Properties */
    setAttribute(Qt::WA_QuitOnClose, true);

    settings = new SettingsDialog;

    QPushButton *settingsButton = new QPushButton(tr("Settings"));
    QPushButton *showButton = new QPushButton(tr("Show"));

    connect(settingsButton, SIGNAL(clicked()), settings, SLOT(show()));

    QHBoxLayout *optionLayout = new QHBoxLayout;
    optionLayout->addWidget(settingsButton);
    optionLayout->addWidget(showButton);

    QDir *videoDir = new QDir("videos/");
    videoDir->setFilter(QDir::Files);

    videoFiles = videoDir->entryInfoList();

    player = new QMediaPlayer;

    vidList = new QListWidget;
    for (int i = 0; i < videoFiles.size(); i++)
        new QListWidgetItem(videoFiles[i].fileName(), vidList);

    connect(vidList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(selectVideo()));

    QLabel *infoLabel = new QLabel;

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(optionLayout);
    mainLayout->addWidget(vidList);
    mainLayout->addWidget(infoLabel);
    setLayout(mainLayout);

    setWindowTitle(tr("Video"));
}

void ControlDialog::selectVideo()
{
    /*
    int vidItm = vidList->currentRow();
    player->setMedia(QUrl::fromLocalFile(videoFiles[vidItm].absoluteFilePath()));

    qDebug() << "1";
    QMediaService *service = player->service();
    qDebug() << "2";
    //QMetaDataWriterControl *writer = qobject_cast<QMetaDataWriterControl *>(service->requestControl("org.qt-project.qt.metadatawritercontrol/5.0"));
    qDebug() << "3";

    //writer->setMetaData("Title", "footitle");
    qDebug() << "4";

    qDebug() << player->metaData(QMediaMetaData::Title);

    if (player->isMetaDataAvailable())
        qDebug() << "yes";
    else
        qDebug() << "no";

    QStringList metadataList = player->availableMetaData();

    for (int i = 0; i < metadataList.size(); i++)
    {
        qDebug() << metadataList[i];
    }
    */
}
