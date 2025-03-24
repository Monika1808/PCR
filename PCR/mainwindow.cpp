#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

#if 0
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(logoScreen()));
    timer->start(8000);
#endif

}

MainWindow::~MainWindow()
{
    delete ui;
}

