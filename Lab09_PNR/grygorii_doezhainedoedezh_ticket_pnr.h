#ifndef GRYGORII_DOEZHAINEDOEDEZH_TICKET_PNR_H
#define GRYGORII_DOEZHAINEDOEDEZH_TICKET_PNR_H

#include "coupee_ticket_pnr.h"
#include "luxury_ticket_pnr.h"


class Grygorii_DoezhaiNeDoedezh_Ticket_PNR : public Coupee_Ticket_PNR, public Luxury_Ticket_PNR
{
public:
    Grygorii_DoezhaiNeDoedezh_Ticket_PNR() = default;
    virtual ~Grygorii_DoezhaiNeDoedezh_Ticket_PNR() {}
    virtual QString print() const {return "Grygorii_DoezhaiNeDoedezh_Ticket_PNR";}
    virtual QString getSeat_Type() const;
    virtual double getPrice() const {return Luxury_Ticket_PNR::Price;}
    virtual void setPrice(double sum) {Luxury_Ticket_PNR::Price = sum;}
    virtual int getSeat_Num() const {return Luxury_Ticket_PNR::Seat_Num;}
    virtual void setSeat_Type(QString Type);
    virtual bool setSeat_Num(int num);
    virtual int getMin_Seat_Num() const{return Luxury_Ticket_PNR::Min_Seat_Num;}
    virtual int getMax_Seat_Num() const{return Luxury_Ticket_PNR::Max_Seat_Num;}
    virtual void setMin_Seat_Num(int Num) {Luxury_Ticket_PNR::Min_Seat_Num = Num;}
    virtual void setMax_Seat_Num(int Num) {Luxury_Ticket_PNR::Max_Seat_Num = Num;}
};

#endif // GRYGORII_DOEZHAINEDOEDEZH_TICKET_PNR_H
