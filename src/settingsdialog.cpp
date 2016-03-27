#include "inc/settingsdialog.h"

SettingsDialog::SettingsDialog()
{
    int i;
    int screens = QApplication::desktop()->screenCount();
    settings = new QSettings("config", QSettings::IniFormat);

    QLabel *screenLabel = new QLabel(tr("Screen"));
    QComboBox *screenComboBox = new QComboBox;
    for (i = 0; i < screens; i++)
    {
        screenComboBox->addItem(QString::number(i+1));
    }

    QPushButton *saveButton = new QPushButton(tr("Save"));
    QPushButton *cancelButton = new QPushButton(tr("Cancel"));

    connect(saveButton, SIGNAL(clicked()), this, SLOT(saveSettings()));
    connect(saveButton, SIGNAL(clicked()), this, SLOT(hide()));
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(hide()));

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(screenLabel, 0, 0);
    mainLayout->addWidget(screenComboBox, 0, 1);
    mainLayout->addWidget(saveButton, 1, 0);
    mainLayout->addWidget(cancelButton, 1, 1);
    setLayout(mainLayout);

    setWindowTitle(tr("Settings"));
}

void SettingsDialog::loadSettings()
{
}

void SettingsDialog::saveSettings()
{
}
