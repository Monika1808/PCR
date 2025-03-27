#ifndef TESTSCREEN_H
#define TESTSCREEN_H

#include <QMainWindow>

namespace Ui {
class testScreen;
}

class testScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit testScreen(QWidget *parent = nullptr);
    ~testScreen();

private slots:
    void on_backPb_clicked();

    void on_sysSetPb_clicked();

private:
    Ui::testScreen *ui;

};

#endif // TESTSCREEN_H
