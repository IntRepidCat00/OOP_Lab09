#ifndef LUXURY_TICKET_PNR_H
#define LUXURY_TICKET_PNR_H

#include "train_ticket_pnr.h"

class Luxury_Ticket_PNR : virtual public Train_Ticket_PNR
{
public:
    Luxury_Ticket_PNR() = default;
    virtual ~Luxury_Ticket_PNR() {}
    virtual QString print() const {return "Luxury_Ticket_PNR";}
    virtual bool setSeat_Num(int Num);
    virtual void setMin_Seat_Num(int Num) {Min_Seat_Num = Num;}
    virtual void setMax_Seat_Num(int Num) {Max_Seat_Num = Num;}
    virtual void setPrice(double New_Price) {Price = New_Price;}
    virtual void setSeat_Type(QString Type);
    virtual int getMin_Seat_Num() const {return Min_Seat_Num;}
    virtual int getMax_Seat_Num() const {return Max_Seat_Num;}
    virtual int getSeat_Num() const {return Seat_Num;}
    virtual double getPrice() const {return Price;}
    virtual QString getSeat_Type() const;
protected:
    int Seat_Num{0};
    int Min_Seat_Num{1};
    int Max_Seat_Num{18};
    double Price {0};
    Place Seat_Type{Bottom};
};

#endif // LUXURY_TICKET_PNR_H
