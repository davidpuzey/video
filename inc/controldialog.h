#ifndef CONTROLDIALOG_H
#define CONTROLDIALOG_H

#include <QtWidgets>
#include <QMediaPlayer>
#include <QMediaMetaData>
#include <QMediaService>
#include <QMetaDataWriterControl>

class ControlDialog : public QWidget
{
    Q_OBJECT

    public:
        ControlDialog();

    private:
        QMediaPlayer *player;
        QListWidget *vidList;
        QFileInfoList videoFiles;

    private slots:
        void selectVideo();
};

#endif
