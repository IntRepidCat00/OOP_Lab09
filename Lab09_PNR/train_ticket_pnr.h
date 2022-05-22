#ifndef TRAIN_TICKET_PNR_H
#define TRAIN_TICKET_PNR_H

#include <QMainWindow>

enum Place{Upper, Bottom};

class Train_Ticket_PNR
{
public:
    Train_Ticket_PNR() = default;
    virtual ~Train_Ticket_PNR() {}
    void setPassenger_Name(QString Name) {Passenger_Name = Name;}
    void setCar_Num(int Num) {Car_Num = Num;}
    QString getPassenger_Name() const {return Passenger_Name;}
    int getCar_Num() const {return Car_Num;}
    virtual QString print() const {return "Train_Ticket_PNR";}
    virtual double getPrice() const = 0;
    virtual int getSeat_Num() const = 0;
    virtual QString getSeat_Type() const = 0;
    virtual bool setSeat_Num(int Num) = 0;
    virtual void setPrice(double New_Price) = 0;
    virtual void setSeat_Type(QString Type) = 0;
protected:
    QString Passenger_Name{"NN"};
    int Car_Num{0};
};

#endif // TRAIN_TICKET_PNR_H
