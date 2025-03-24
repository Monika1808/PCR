#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();



     void initScreens();
    void update();

private:
    Ui::MainWindow *ui;

public slots:
    void logoScreen();

};
#endif // MAINWINDOW_H
