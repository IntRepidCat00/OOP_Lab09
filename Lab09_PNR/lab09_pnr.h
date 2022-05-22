#ifndef LAB08_PNR_H
#define LAB08_PNR_H

#include <QMainWindow>
#include "train_ticket_pnr.h"
#include "coupee_ticket_pnr.h"
#include "luxury_ticket_pnr.h"
#include "grygorii_doezhainedoedezh_ticket_pnr.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Lab09_PNR; }
QT_END_NAMESPACE

class Lab09_PNR : public QMainWindow
{
    Q_OBJECT

public:
    Lab09_PNR(QWidget *parent = nullptr);
    ~Lab09_PNR();

    Train_Ticket_PNR **tickets{nullptr};
    int size{0};

    void updateList();

private slots:

    void on_btnNew_PNR_clicked();

    void on_btnDeleteAt_PNR_clicked();

    void on_btnSet_PNR_clicked();

    void on_btnCalcSum_PNR_clicked();

    void on_btnSort_PNR_clicked();

private:
    Ui::Lab09_PNR *ui;
};
#endif // LAB08_PNR_H
