#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QMainWindow>

namespace Ui {
class loginScreen;
}

class loginScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginScreen(QWidget *parent = nullptr);
    ~loginScreen();

    //set date & time
    void setDateTime();


private slots:
    void on_loginPb_clicked();

    void on_frogotPwdPb_clicked();

    void on_nameLineEdit_returnPressed();


private:
    Ui::loginScreen *ui;


    //checkUser credentials
    void checkUser();
};

#endif // LOGINSCREEN_H
