#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include "extern.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

#if 1
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(loginScreen()));
    timer->start(5000);
#endif


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loginScreen()
{
    loginScreenPtr->show();
    logoScreenPtr->hide();
}


