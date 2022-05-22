#include "coupee_ticket_pnr.h"

bool Coupee_Ticket_PNR::setSeat_Num(int Num)
{
    if(Num >= Min_Seat_Num && Num <= Max_Seat_Num)
    {
        Seat_Num = Num;
        return true;
    } else
    {
        return false;
    }
}

void Coupee_Ticket_PNR::setSeat_Type(QString Type)
{
    if(Type == "Bottom" || Type == "bottom")
    {
        Seat_Type = Bottom;
    } else if(Type == "Upper" || Type == "upper")
    {
        Seat_Type = Upper;
    }
}

QString Coupee_Ticket_PNR::getSeat_Type() const
{
    if(Seat_Type == Upper)
    {
        return "Upper";
    } else
    {
        return "Bottom";
    }
}
