#ifndef SYSSETTINGSCREEN_H
#define SYSSETTINGSCREEN_H

#include <QMainWindow>

namespace Ui {
class sysSettingScreen;
}

class sysSettingScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit sysSettingScreen(QWidget *parent = nullptr);
    ~sysSettingScreen();

private slots:
    void on_backPb_clicked();

private:
    Ui::sysSettingScreen *ui;
    void setDateTime();
};

#endif // SYSSETTINGSCREEN_H
