#ifndef SAMPLEIDDIAGLOG_H
#define SAMPLEIDDIAGLOG_H

#include <QDialog>

namespace Ui {
class sampleIDDiaglog;
}

class sampleIDDiaglog : public QDialog
{
    Q_OBJECT

public:
    explicit sampleIDDiaglog(QWidget *parent = nullptr);
    ~sampleIDDiaglog();

private:
    Ui::sampleIDDiaglog *ui;




private slots:
    void on_confirmPb_clicked();
    void on_cancelPb_clicked();
};

#endif // SAMPLEIDDIAGLOG_H
