#include "testscreen.h"
#include "ui_testscreen.h"
#include<QDate>
#include<QTime>
#include"extern.h"
#include "define.h"
// #include "ui_sampleiddiaglog.h"
#include <QDebug>
#include<QMessageBox>

testScreen::testScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testScreen)
{
    ui->setupUi(this);
    ui->line->hide();
    /* set Date,Time */
    setDateTime();

    /*STOP PB stylesheet*/
    ui->moduleAStopPb->setStyleSheet(STOP_PB_BLUE_STYLE);
    ui->moduleBStopPb->setStyleSheet(STOP_PB_BLUE_STYLE);

    /*new test, view result, stop test pb*/
    ui->newTestPbA->hide();
    ui->newTestPbB->hide();
    ui->viewResultPbA->hide();
    ui->viewResultPbB->hide();

    ui->moduleAStopPb->setGeometry(STOP_PB_GOE_A);
    ui->moduleBStopPb->setGeometry(STOP_PB_GOE_B);

    checkTestcompletion();
}

testScreen::~testScreen()
{
    delete ui;
}


void testScreen:: setDateTime()
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


void testScreen::on_moduleBCartridgePb_clicked()
{
    ui->moduleBstkWidget->setCurrentIndex(TEST_START_PAGE_B);
    ui->selectPbB->show();
    ui->twoWayPbB->show();
    ui->hiv00TxtLabel->show();

    m_cartridgeBflag = true;
}


void testScreen::on_moduleACartridgePb_clicked()
{
    ui->moduleAstkWidget->setCurrentIndex(TEST_START_PAGE_A);
    ui->selectPbA->show();
    ui->twoWayPbA->show();
    m_cartridgeAflag = true;
}

/*Module B*/
void testScreen::on_b1_2TxtPb_clicked()
{
    // qDebug() << "b1_2TxtPb clicked : " ;
    sampleIdDiaglogPtr->show();
    m_b12flag =  true;
}

void testScreen::on_b3_4TxtPb_clicked()
{
    sampleIdDiaglogPtr->show();
    m_b34flag = true;
}


void testScreen::on_b5_6TxtPb_clicked()
{
    sampleIdDiaglogPtr->show();
    m_b56flag = true;
}


void testScreen::on_b7_8TxtPb_clicked()
{
    sampleIdDiaglogPtr->show();
    m_b78flag = true;
}


/*Module A*/
void testScreen::on_a1_2TxtPb_clicked()
{
    // qDebug() << "a1_2TxtPb clicked : " ;
    sampleIdDiaglogPtr->show();
    m_a12flag = true;
}

void testScreen::on_a3_4TxtPb_clicked()
{
   sampleIdDiaglogPtr->show();
    m_a34flag = true;
}

void testScreen::on_a5_6TxtPb_clicked()
{
   sampleIdDiaglogPtr->show();
    m_a56flag = true;
}

void testScreen::on_a7_8TxtPb_clicked()
{
   sampleIdDiaglogPtr->show();
    m_a78flag = true ;
}

//module A stopPb
void testScreen::on_moduleAStopPb_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Tips",
                         "Test is ongoing. Terminated test will not be recorded, and sample will be\n invalid. Are you sure you want to terminate the test?",
         QMessageBox::Cancel|QMessageBox::Yes);

    if(reply == QMessageBox::Yes)
    {
        qDebug()<<"Yes was clicked !";
        // QApplication::quit();
    }
    else
    {
        qDebug()<<"Yes was *not* clicked !";
    }
}

//module A stopPb
void testScreen::on_moduleBStopPb_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Tips",
                                  "Test is ongoing. Terminated test will not be recorded, and sample will be\n invalid. Are you sure you want to terminate the test?",
                                  QMessageBox::Cancel|QMessageBox::Yes);

    if(reply == QMessageBox::Yes)
    {
        qDebug()<<"Yes was clicked !";
        // QApplication::quit();
    }
    else
    {
        qDebug()<<"Yes was *not* clicked !";
    }
}


void testScreen::checkTestcompletion()
{
    //Module A
    if((testTime == "00:00:00") && (m_cartridgeAflag == true) )
    {
        ui->newTestPbA->show();
        ui->viewResultPbA->setGeometry(STOP_PB_GOE_A);
        ui->moduleAStopPb->setGeometry(VIEW_RESULTS_PB_GOE_A);
        ui->viewResultPbA->show();
        ui->moduleAStopPb->hide();
    }
    else
    {
        ui->newTestPbA->hide();
        ui->viewResultPbA->setGeometry(VIEW_RESULTS_PB_GOE_A);
        ui->moduleAStopPb->setGeometry(STOP_PB_GOE_A);
        ui->viewResultPbA->hide();
        ui->moduleAStopPb->show();
    }

    //Module B
    if((testTime == "00:00:00") && (m_cartridgeBflag == true) )
    {
        ui->newTestPbB->show();
        ui->viewResultPbB->setGeometry(STOP_PB_GOE_B);
        ui->moduleBStopPb->setGeometry(VIEW_RESULTS_PB_GOE_B);
        ui->viewResultPbB->show();
        ui->moduleBStopPb->hide();
    }
    else
    {
        ui->newTestPbB->hide();
        ui->viewResultPbB->setGeometry(VIEW_RESULTS_PB_GOE_B);
        ui->moduleBStopPb->setGeometry(STOP_PB_GOE_B);
        ui->viewResultPbB->hide();
        ui->moduleBStopPb->show();
    }

}
