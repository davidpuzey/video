#ifndef CONTROLDIALOG_H
#define CONTROLDIALOG_H

#include <QtWidgets>
#include <QMediaPlayer>
#include <QMediaMetaData>
#include <QMediaService>
#include <QMetaDataWriterControl>

#include "inc/settingsdialog.h"

class ControlDialog : public QWidget
{
    Q_OBJECT

    public:
        ControlDialog();

    private:
        QMediaPlayer *player;
        QListWidget *vidList;
        QFileInfoList videoFiles;
        SettingsDialog *settings;

    private slots:
        void selectVideo();
};

#endif
