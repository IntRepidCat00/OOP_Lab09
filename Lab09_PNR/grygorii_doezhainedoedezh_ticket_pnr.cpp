#include "grygorii_doezhainedoedezh_ticket_pnr.h"

bool Grygorii_DoezhaiNeDoedezh_Ticket_PNR::setSeat_Num(int num)
{
    if(num >= Luxury_Ticket_PNR::Min_Seat_Num && num <= Luxury_Ticket_PNR::Max_Seat_Num)
    {
        Luxury_Ticket_PNR::Seat_Num = num;
        return true;
    } else
    {
        return false;
    }
}

QString Grygorii_DoezhaiNeDoedezh_Ticket_PNR::getSeat_Type() const
{
    if(Luxury_Ticket_PNR::Seat_Type == Upper)
    {
        return "Upper";
    } else
    {
        return "Bottom";
    }
}

void Grygorii_DoezhaiNeDoedezh_Ticket_PNR::setSeat_Type(QString Type)
{
    if(Type == "Bottom" || Type == "bottom")
    {
        Luxury_Ticket_PNR::Seat_Type = Bottom;
    } else if(Type == "Upper" || Type == "upper")
    {
        Luxury_Ticket_PNR::Seat_Type = Upper;
    }
}
