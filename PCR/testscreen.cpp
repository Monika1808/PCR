#include "testscreen.h"
#include "ui_testscreen.h"
#include<QDate>
#include<QTime>
#include"extern.h"

testScreen::testScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testScreen)
{
    ui->setupUi(this);
    ui->line->hide();
    loginScreenPtr->setDateTime(); /* set Date,Time */
}

testScreen::~testScreen()
{
    delete ui;
}


void testScreen::on_backPb_clicked()
{
    loginScreenPtr->showFullScreen();
    testScreenPtr->hide();
}


void testScreen::on_sysSetPb_clicked()
{
    sysSettingScreenPtr->showFullScreen();
    testScreenPtr->hide();
}

