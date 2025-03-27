#include "mainwindow.h"
#include "loginscreen.h"
#include "testscreen.h"
#include "syssettingscreen.h"

#include <QApplication>

MainWindow *logoScreenPtr;
loginScreen *loginScreenPtr;
testScreen *testScreenPtr;
sysSettingScreen *sysSettingScreenPtr;


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
   // testScreenPtr->showFullScreen();

    //System Settings Screen
    sysSettingScreenPtr = new sysSettingScreen();
    sysSettingScreenPtr->setWindowFlags(Qt::WindowFlags() | Qt::FramelessWindowHint);
   // sysSettingScreenPtr->showFullScreen();




    return a.exec();
}





