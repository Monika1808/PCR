#include "sampleiddiaglog.h"
#include "ui_sampleiddiaglog.h"
#include "extern.h"
#include "ui_testscreen.h"
#include "define.h"

sampleIDDiaglog::sampleIDDiaglog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sampleIDDiaglog)
{
    ui->setupUi(this);
    ui->sampleIdLineEdit->setFocus();
}

sampleIDDiaglog::~sampleIDDiaglog()
{
    delete ui;
}

void sampleIDDiaglog::on_confirmPb_clicked()
{
    /*Module A*/
    // qDebug() << "testScreenPtr->m_cartridgeBflag: " << testScreenPtr->m_cartridgeBflag;
    // qDebug() << "testScreenPtr->m_cartridgeAflag: " << testScreenPtr->m_cartridgeAflag;

    if((testScreenPtr->m_cartridgeAflag == true) && (testScreenPtr->m_cartridgeBflag == false))
    {
        if(testScreenPtr->m_a12flag)
        {
            testScreenPtr->ui->a1_2TxtPb->setText(ui->sampleIdLineEdit->text());
        }
        else  if(testScreenPtr->m_a34flag)
        {
            testScreenPtr->ui->a3_4TxtPb->setText(ui->sampleIdLineEdit->text());
        }
        else  if(testScreenPtr->m_a56flag)
        {
            testScreenPtr->ui->a5_6TxtPb->setText(ui->sampleIdLineEdit->text());
        }
        else  if(testScreenPtr->m_a78flag)
        {
            testScreenPtr->ui->a7_8TxtPb->setText(ui->sampleIdLineEdit->text());
        }
        else
        {
           //nothing to do
        }
        // module A stop Pb
        testScreenPtr->ui->moduleAStopPb->setStyleSheet(STOP_PB_RED_STYLE);
        testScreenPtr->ui->moduleAStopPb->setText("Stop\n"+testScreenPtr->testTime);
    }
    /*Module B*/
   else if((testScreenPtr->m_cartridgeAflag == false) && (testScreenPtr->m_cartridgeBflag == true))
    {
        // qDebug() << "testScreenPtr->m_b12flag: " << testScreenPtr->m_b12flag;
        if(testScreenPtr->m_b12flag)
        {
           testScreenPtr->ui->b1_2TxtPb->setText(ui->sampleIdLineEdit->text());
        }
        else  if(testScreenPtr->m_b34flag)
        {
            testScreenPtr->ui->b3_4TxtPb->setText(ui->sampleIdLineEdit->text());
        }
        else  if(testScreenPtr->m_b56flag)
        {
            testScreenPtr->ui->b5_6TxtPb->setText(ui->sampleIdLineEdit->text());
        }
        else  if(testScreenPtr->m_b78flag)
        {
            testScreenPtr->ui->b7_8TxtPb->setText(ui->sampleIdLineEdit->text());
        }
        else
        {
            //nothing to do
        }
        // module B Stop pb
        testScreenPtr->ui->moduleBStopPb->setStyleSheet(STOP_PB_RED_STYLE);
        testScreenPtr->ui->moduleBStopPb->setText("Stop\n"+testScreenPtr->testTime);
    }
    else
    {
       //nothing to do
    }

    ui->sampleIdLineEdit->clear();
    this->close();
}

void sampleIDDiaglog::on_cancelPb_clicked()
{
    this->close();
}


