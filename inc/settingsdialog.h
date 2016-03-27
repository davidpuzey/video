#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QtWidgets>
#include <QWidget>
#include <QSettings>

class SettingsDialog : public QWidget
{
    Q_OBJECT

    public:
        SettingsDialog();

    private slots:
        QSettings *settings;
        void loadSettings();
        void saveSettings();
};

#endif
