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
      Ui::testScreen *ui;


    //Module A flags
    bool m_cartridgeAflag = false;
    bool m_a12flag = false;
    bool m_a34flag = false;
    bool m_a56flag = false;
    bool m_a78flag = false;

    //Module B flags
    bool m_cartridgeBflag = false;
    bool m_b12flag = false;
    bool m_b34flag = false;
    bool m_b56flag = false;
    bool m_b78flag = false;


    QString testTime = "02:15:23";


    ~testScreen();



private slots:

    void on_backPb_clicked();
    void on_sysSetPb_clicked();

    //Module A
    void on_moduleACartridgePb_clicked();
    void on_a1_2TxtPb_clicked();
    void on_a3_4TxtPb_clicked();
    void on_a5_6TxtPb_clicked();
    void on_a7_8TxtPb_clicked();



    //Module B
    void on_moduleBCartridgePb_clicked();
    void on_b1_2TxtPb_clicked();
    void on_b3_4TxtPb_clicked();
    void on_b5_6TxtPb_clicked();
    void on_b7_8TxtPb_clicked();

    void on_moduleAStopPb_clicked();
    void on_moduleBStopPb_clicked();



private:

    void checkTestcompletion();
    void setDateTime();



};

#endif // TESTSCREEN_H
