#include "lab09_pnr.h"
#include "ui_lab09_pnr.h"

Lab09_PNR::Lab09_PNR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab09_PNR)
{
    ui->setupUi(this);
}

Lab09_PNR::~Lab09_PNR()
{
    delete ui;
}

void Lab09_PNR::updateList()
{
    ui->listWidget_PNR->clear();
    for(int i{0}; i < size; i++)
    {
        QString text = "";
        text += QString::number(i+1);
        text += ") | ";
        text += tickets[i]->print();
        text += " | Passenger's Name: ";
        text += tickets[i]->getPassenger_Name();
        text += " | Car's Num: ";
        text += QString::number(tickets[i]->getCar_Num());
        text += " | Seat Num: ";
        text += QString::number(tickets[i]->getSeat_Num());
        text += " | Seat Type: ";
        text += tickets[i]->getSeat_Type();
        text += " | Ticket Price: ";
        text += QString::number(tickets[i]->getPrice());
        ui->listWidget_PNR->addItem(text);
    }
}

void Lab09_PNR::on_btnNew_PNR_clicked()
{
    ui->lblMsgText_PNR->setText("");
    QString ticketType = ui->comboBoxTicketType_PNR->currentText();
    size++;
    Train_Ticket_PNR **newTickets = new Train_Ticket_PNR*[size];
    for(int i{0}; i < size-1; i++)
    {
        if(tickets[i]->print() == "Coupee_Ticket_PNR")
        {
            newTickets[i] = dynamic_cast<Train_Ticket_PNR*>(new Coupee_Ticket_PNR);
        } else if(tickets[i]->print() == "Luxury_Ticket_PNR")
        {
            newTickets[i] = dynamic_cast<Train_Ticket_PNR*>(new Luxury_Ticket_PNR);
        } else
        {
            newTickets[i] = dynamic_cast<Train_Ticket_PNR*>(new Grygorii_DoezhaiNeDoedezh_Ticket_PNR);
        }
        newTickets[i]->setPassenger_Name(tickets[i]->getPassenger_Name());
        newTickets[i]->setCar_Num(tickets[i]->getCar_Num());
        newTickets[i]->setSeat_Num(tickets[i]->getSeat_Num());
        newTickets[i]->setSeat_Type(tickets[i]->getSeat_Type());
        newTickets[i]->setPrice(tickets[i]->getPrice());
    }

    if(tickets != nullptr)
    {
        delete tickets;
    }

    tickets=newTickets;

    if(ticketType ==  "Coupee")
    {
        tickets[size-1] = dynamic_cast<Train_Ticket_PNR*>(new Coupee_Ticket_PNR);
    } else if(ticketType == "Luxury")
    {
        tickets[size-1] = dynamic_cast<Train_Ticket_PNR*>(new Luxury_Ticket_PNR);
    } else
    {
        tickets[size-1] = dynamic_cast<Train_Ticket_PNR*>(new Grygorii_DoezhaiNeDoedezh_Ticket_PNR);
    }
    updateList();
}


void Lab09_PNR::on_btnDeleteAt_PNR_clicked()
{
    ui->lblMsgText_PNR->setText("");
    int numToDelete = ui->spinBoxElemAt_PNR->value();
    if(numToDelete > size)
    {
        ui->lblMsgText_PNR->setText("Cannot delete this element because it doesn't exist");
        return;
    }
    if(size == 1)
    {
        size--;
        delete tickets;
        tickets = nullptr;
        ui->listWidget_PNR->clear();
        return;
    }
    numToDelete--;
    size--;
    Train_Ticket_PNR **newTickets = new Train_Ticket_PNR*[size];

    int j{0};
    for(int i{0}; i < size; i++)
    {
        if(i == numToDelete)
        {
            j++;
        }
        if(tickets[j]->print() == "Coupee_Ticket_PNR")
        {
            newTickets[i] = dynamic_cast<Train_Ticket_PNR*>(new Coupee_Ticket_PNR);
        } else if(tickets[j]->print() == "Luxury_Ticket_PNR")
        {
            newTickets[i] = dynamic_cast<Train_Ticket_PNR*>(new Luxury_Ticket_PNR);
        } else
        {
            newTickets[i] = dynamic_cast<Train_Ticket_PNR*>(new Grygorii_DoezhaiNeDoedezh_Ticket_PNR);
        }
        newTickets[i]->setPassenger_Name(tickets[j]->getPassenger_Name());
        newTickets[i]->setCar_Num(tickets[j]->getCar_Num());
        newTickets[i]->setSeat_Num(tickets[j]->getSeat_Num());
        newTickets[i]->setSeat_Type(tickets[j]->getSeat_Type());
        newTickets[i]->setPrice(tickets[j]->getPrice());
        j++;
    }

    if(tickets != nullptr)
    {
        delete tickets;
    }


    tickets = newTickets;

    updateList();
}


void Lab09_PNR::on_btnSet_PNR_clicked()
{
    int index = ui->spinBoxElemAt_PNR->value() - 1;

    int carNum = ui->spinBoxCar_PNR->value();
    int seatNum = ui->spinBoxSeat_PNR->value();
    QString passName = ui->lineEditPassengerName_PNR->text();
    QString place = ui->comboBoxPlace_PNR->currentText();
    double price = ui->lineEditPrice_PNR->text().toDouble();

    bool setOrNo = true;

    for(int i{0}; i < size; i++)
    {
        if(tickets[i]->getSeat_Num() == seatNum && tickets[i]->getCar_Num() == carNum && i != index)
        {
            setOrNo = false;
        }
    }

    if(setOrNo)
    {
        if(tickets[index]->setSeat_Num(seatNum))
        {
            tickets[index]->setSeat_Type(place);
            tickets[index]->setCar_Num(carNum);
            tickets[index]->setPassenger_Name(passName);
            tickets[index]->setPrice(price);
            ui->lblMsgText_PNR->setText("Element was successfully set");
        } else
        {
            ui->lblMsgText_PNR->setText("Element wasn't set");
        }
    } else
    {
        ui->lblMsgText_PNR->setText("Element wasn't set");
    }
    updateList();
}


void Lab09_PNR::on_btnCalcSum_PNR_clicked()
{
    ui->lblMsgText_PNR->setText("");
    double sum{0};

    for(int i{0}; i < size; i++)
    {
        sum += tickets[i]->getPrice();
    }

    ui->lblSumVal_PNR->setText(QString::number(sum));
}


void Lab09_PNR::on_btnSort_PNR_clicked()
{
    ui->lblMsgText_PNR->setText("");
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (tickets[j]->getPrice() < tickets[j + 1]->getPrice())
                {
                    Train_Ticket_PNR *temp{tickets[j]};
                    tickets[j] = tickets[j+1];
                    tickets[j+1] = temp;
                }
        }
    }

    ui->lblMsgText_PNR->setText("Array was sorted");
    updateList();
}

