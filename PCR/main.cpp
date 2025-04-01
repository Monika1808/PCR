#include "mainwindow.h"
#include "loginscreen.h"
#include "testscreen.h"
#include "syssettingscreen.h"
#include "testscreen.h"
#include "ui_testscreen.h"
#include "define.h"
#include "sampleiddiaglog.h"


#include <QApplication>

MainWindow *logoScreenPtr;
loginScreen *loginScreenPtr;
testScreen *testScreenPtr;
sysSettingScreen *sysSettingScreenPtr;
sampleIDDiaglog *sampleIdDiaglogPtr;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();


    //Logo Screen
    logoScreenPtr = new MainWindow();
    logoScreenPtr->setWindowFlags(Qt::WindowFlags() | Qt::FramelessWindowHint);
    logoScreenPtr->showFullScreen();

    //Login Screen
    loginScreenPtr = new loginScreen();
    loginScreenPtr->setWindowFlags(Qt::WindowFlags() | Qt::FramelessWindowHint);
   // loginScreenPtr->showFullScreen();

    //Test Screen
    testScreenPtr = new testScreen();
    testScreenPtr->setWindowFlags(Qt::WindowFlags() | Qt::FramelessWindowHint);
    testScreenPtr->ui->moduleAstkWidget->setCurrentIndex(BEFORE_TEST_START_PAGE_A);
    testScreenPtr->ui->selectPbA->hide();
    testScreenPtr->ui->twoWayPbA->hide();

    testScreenPtr->ui->moduleBstkWidget->setCurrentIndex(BEFORE_TEST_START_PAGE_B);
    testScreenPtr->ui->selectPbB->hide();
    testScreenPtr->ui->twoWayPbB->hide();
    testScreenPtr->ui->hiv00TxtLabel->hide();

   // testScreenPtr->showFullScreen();

    //System Settings Screen
    sysSettingScreenPtr = new sysSettingScreen();
    sysSettingScreenPtr->setWindowFlags(Qt::WindowFlags() | Qt::FramelessWindowHint);
   // sysSettingScreenPtr->showFullScreen();


    //sampleID Diaglog screen
    sampleIdDiaglogPtr = new sampleIDDiaglog();
    sampleIdDiaglogPtr->setWindowFlags(Qt::WindowFlags() | Qt::FramelessWindowHint);





    return a.exec();
}





