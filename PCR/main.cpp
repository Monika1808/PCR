#include "mainwindow.h"

#include <QApplication>

MainWindow *m_LogoScreenPtr;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();

   m_LogoScreenPtr = new MainWindow();
   m_LogoScreenPtr->setWindowFlags(Qt::WindowFlags() | Qt::FramelessWindowHint);
   m_LogoScreenPtr->showFullScreen();






    return a.exec();
}

void MainWindow::logoScreen()
{
  //  m_LogoScreenPtr->show();
}

