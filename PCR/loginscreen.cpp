#include "loginscreen.h"
#include "ui_loginscreen.h"
#include <QTime>
#include <QDate>
#include <QString>
#include <qdebug.h>
#include<QMessageBox>
#include "extern.h"
#include "testscreen.h"
#include "ui_testscreen.h"
#include "define.h"


loginScreen::loginScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginScreen)
{
    ui->setupUi(this);
    setDateTime(); /* set Date,Time */


}

void loginScreen:: setDateTime()
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

loginScreen::~loginScreen()
{
    delete ui;
}

void loginScreen:: checkUser()
{
    // qDebug() << "Current date is: " << ui->nameLineEdit->text();
    // qDebug() << "Current time is: " << ui->pwdLineEdit->text();

    QString userId = ui->nameLineEdit->text();
    QString userPwd = ui->pwdLineEdit->text();

    if((userId == "admin") && (userPwd == "123"))
    {
        /*show test Screen */
        testScreenPtr->ui->moduleAstkWidget->setCurrentIndex(BEFORE_TEST_START_PAGE_A);
        testScreenPtr->ui->selectPbA->hide();
        testScreenPtr->ui->twoWayPbA->hide();

        testScreenPtr->ui->moduleBstkWidget->setCurrentIndex(BEFORE_TEST_START_PAGE_B);
        testScreenPtr->ui->selectPbB->hide();
        testScreenPtr->ui->twoWayPbB->hide();
        testScreenPtr->ui->hiv00TxtLabel->hide();

        testScreenPtr->show();
        ui->nameLineEdit->clear();
        ui->pwdLineEdit->clear();
    }
    else
    {
        QMessageBox::warning(this, "Error!", "Incorrect UserId or password!");
    }
}



void loginScreen::on_loginPb_clicked()
{
     checkUser(); /* check user credentials*/
}


void loginScreen::on_frogotPwdPb_clicked()
{
    QMessageBox::information(this, tr("Information"), tr("Contact Administrator!"));
}


void loginScreen::on_nameLineEdit_returnPressed()
{
    ui->pwdLineEdit->setFocus();
}



