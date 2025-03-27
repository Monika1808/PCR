#include "syssettingscreen.h"
#include "ui_syssettingscreen.h"
#include "extern.h"
#include<QDate>
#include<QTime>


sysSettingScreen::sysSettingScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sysSettingScreen)
{
    ui->setupUi(this);
    loginScreenPtr->setDateTime(); /* set Date,Time */
    /*set date time*/
    QDateTime dateTime = dateTime.currentDateTime();
    QString currentDateTime = dateTime.toString("  yyyy-MM-dd  HH : mm : ss");
    ui->dateTimeLabel->setText(currentDateTime);

}

sysSettingScreen::~sysSettingScreen()
{
    delete ui;
}

void sysSettingScreen::on_backPb_clicked()
{
    testScreenPtr->showFullScreen();
    sysSettingScreenPtr->hide();
}

