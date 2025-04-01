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
    /* set Date,Time */
    setDateTime();
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

void sysSettingScreen:: setDateTime()
{
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    QString currDate = cd.toString("yyyy/MM/dd");
    QString currTime = ct.toString("hh : mm : ss");
    ui->dateLabel->setText(currDate);
    ui->timeLabel->setText(currTime);

    // qDebug() << "Current date is: " << currDate;
    // qDebug() << "Current time is: " << currTime;
}

