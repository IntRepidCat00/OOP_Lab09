/********************************************************************************
** Form generated from reading UI file 'lab09_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB09_PNR_H
#define UI_LAB09_PNR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab09_PNR
{
public:
    QWidget *centralwidget;
    QLabel *lblMsg_PNR;
    QSpinBox *spinBoxCar_PNR;
    QSpinBox *spinBoxSeat_PNR;
    QPushButton *btnDeleteAt_PNR;
    QListWidget *listWidget_PNR;
    QPushButton *btnSort_PNR;
    QSpinBox *spinBoxElemAt_PNR;
    QLabel *lblElemAt_PNR;
    QLabel *lblTicketType_PNR;
    QLineEdit *lineEditPrice_PNR;
    QLabel *lblSumVal_PNR;
    QLabel *lblCar_PNR;
    QLabel *lblSeat_PNR;
    QLabel *lblPrice_PNR;
    QLineEdit *lineEditPassengerName_PNR;
    QPushButton *btnNew_PNR;
    QLabel *lblPassengerName_PNR;
    QPushButton *btnSet_PNR;
    QComboBox *comboBoxTicketType_PNR;
    QLabel *lblMsgText_PNR;
    QLabel *lblSum_PNR;
    QPushButton *btnCalcSum_PNR;
    QLabel *lblPlace_PNR;
    QComboBox *comboBoxPlace_PNR;

    void setupUi(QMainWindow *Lab09_PNR)
    {
        if (Lab09_PNR->objectName().isEmpty())
            Lab09_PNR->setObjectName(QString::fromUtf8("Lab09_PNR"));
        Lab09_PNR->resize(795, 623);
        centralwidget = new QWidget(Lab09_PNR);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblMsg_PNR = new QLabel(centralwidget);
        lblMsg_PNR->setObjectName(QString::fromUtf8("lblMsg_PNR"));
        lblMsg_PNR->setGeometry(QRect(290, 580, 81, 20));
        spinBoxCar_PNR = new QSpinBox(centralwidget);
        spinBoxCar_PNR->setObjectName(QString::fromUtf8("spinBoxCar_PNR"));
        spinBoxCar_PNR->setGeometry(QRect(10, 580, 81, 29));
        spinBoxCar_PNR->setMinimum(1);
        spinBoxCar_PNR->setMaximum(999);
        spinBoxSeat_PNR = new QSpinBox(centralwidget);
        spinBoxSeat_PNR->setObjectName(QString::fromUtf8("spinBoxSeat_PNR"));
        spinBoxSeat_PNR->setGeometry(QRect(100, 580, 81, 29));
        spinBoxSeat_PNR->setMinimum(1);
        spinBoxSeat_PNR->setMaximum(999);
        btnDeleteAt_PNR = new QPushButton(centralwidget);
        btnDeleteAt_PNR->setObjectName(QString::fromUtf8("btnDeleteAt_PNR"));
        btnDeleteAt_PNR->setGeometry(QRect(140, 450, 121, 51));
        listWidget_PNR = new QListWidget(centralwidget);
        listWidget_PNR->setObjectName(QString::fromUtf8("listWidget_PNR"));
        listWidget_PNR->setGeometry(QRect(10, 10, 771, 431));
        btnSort_PNR = new QPushButton(centralwidget);
        btnSort_PNR->setObjectName(QString::fromUtf8("btnSort_PNR"));
        btnSort_PNR->setGeometry(QRect(530, 450, 121, 51));
        spinBoxElemAt_PNR = new QSpinBox(centralwidget);
        spinBoxElemAt_PNR->setObjectName(QString::fromUtf8("spinBoxElemAt_PNR"));
        spinBoxElemAt_PNR->setGeometry(QRect(680, 480, 101, 29));
        spinBoxElemAt_PNR->setMinimum(1);
        spinBoxElemAt_PNR->setMaximum(999);
        lblElemAt_PNR = new QLabel(centralwidget);
        lblElemAt_PNR->setObjectName(QString::fromUtf8("lblElemAt_PNR"));
        lblElemAt_PNR->setGeometry(QRect(680, 450, 101, 20));
        lblTicketType_PNR = new QLabel(centralwidget);
        lblTicketType_PNR->setObjectName(QString::fromUtf8("lblTicketType_PNR"));
        lblTicketType_PNR->setGeometry(QRect(680, 520, 91, 20));
        lineEditPrice_PNR = new QLineEdit(centralwidget);
        lineEditPrice_PNR->setObjectName(QString::fromUtf8("lineEditPrice_PNR"));
        lineEditPrice_PNR->setGeometry(QRect(550, 530, 111, 28));
        lblSumVal_PNR = new QLabel(centralwidget);
        lblSumVal_PNR->setObjectName(QString::fromUtf8("lblSumVal_PNR"));
        lblSumVal_PNR->setGeometry(QRect(190, 580, 81, 20));
        lblCar_PNR = new QLabel(centralwidget);
        lblCar_PNR->setObjectName(QString::fromUtf8("lblCar_PNR"));
        lblCar_PNR->setGeometry(QRect(10, 560, 81, 20));
        lblSeat_PNR = new QLabel(centralwidget);
        lblSeat_PNR->setObjectName(QString::fromUtf8("lblSeat_PNR"));
        lblSeat_PNR->setGeometry(QRect(100, 560, 81, 20));
        lblPrice_PNR = new QLabel(centralwidget);
        lblPrice_PNR->setObjectName(QString::fromUtf8("lblPrice_PNR"));
        lblPrice_PNR->setGeometry(QRect(550, 510, 121, 20));
        lineEditPassengerName_PNR = new QLineEdit(centralwidget);
        lineEditPassengerName_PNR->setObjectName(QString::fromUtf8("lineEditPassengerName_PNR"));
        lineEditPassengerName_PNR->setGeometry(QRect(10, 530, 431, 28));
        btnNew_PNR = new QPushButton(centralwidget);
        btnNew_PNR->setObjectName(QString::fromUtf8("btnNew_PNR"));
        btnNew_PNR->setGeometry(QRect(10, 450, 121, 51));
        lblPassengerName_PNR = new QLabel(centralwidget);
        lblPassengerName_PNR->setObjectName(QString::fromUtf8("lblPassengerName_PNR"));
        lblPassengerName_PNR->setGeometry(QRect(10, 510, 181, 20));
        btnSet_PNR = new QPushButton(centralwidget);
        btnSet_PNR->setObjectName(QString::fromUtf8("btnSet_PNR"));
        btnSet_PNR->setGeometry(QRect(270, 450, 121, 51));
        comboBoxTicketType_PNR = new QComboBox(centralwidget);
        comboBoxTicketType_PNR->addItem(QString());
        comboBoxTicketType_PNR->addItem(QString());
        comboBoxTicketType_PNR->addItem(QString());
        comboBoxTicketType_PNR->setObjectName(QString::fromUtf8("comboBoxTicketType_PNR"));
        comboBoxTicketType_PNR->setGeometry(QRect(680, 550, 101, 28));
        lblMsgText_PNR = new QLabel(centralwidget);
        lblMsgText_PNR->setObjectName(QString::fromUtf8("lblMsgText_PNR"));
        lblMsgText_PNR->setGeometry(QRect(360, 580, 311, 20));
        lblSum_PNR = new QLabel(centralwidget);
        lblSum_PNR->setObjectName(QString::fromUtf8("lblSum_PNR"));
        lblSum_PNR->setGeometry(QRect(190, 560, 81, 20));
        btnCalcSum_PNR = new QPushButton(centralwidget);
        btnCalcSum_PNR->setObjectName(QString::fromUtf8("btnCalcSum_PNR"));
        btnCalcSum_PNR->setGeometry(QRect(400, 450, 121, 51));
        lblPlace_PNR = new QLabel(centralwidget);
        lblPlace_PNR->setObjectName(QString::fromUtf8("lblPlace_PNR"));
        lblPlace_PNR->setGeometry(QRect(450, 510, 71, 20));
        comboBoxPlace_PNR = new QComboBox(centralwidget);
        comboBoxPlace_PNR->addItem(QString());
        comboBoxPlace_PNR->addItem(QString());
        comboBoxPlace_PNR->setObjectName(QString::fromUtf8("comboBoxPlace_PNR"));
        comboBoxPlace_PNR->setGeometry(QRect(450, 530, 91, 28));
        Lab09_PNR->setCentralWidget(centralwidget);

        retranslateUi(Lab09_PNR);

        QMetaObject::connectSlotsByName(Lab09_PNR);
    } // setupUi

    void retranslateUi(QMainWindow *Lab09_PNR)
    {
        Lab09_PNR->setWindowTitle(QCoreApplication::translate("Lab09_PNR", "Lab09_PNR", nullptr));
        lblMsg_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Message:", nullptr));
        btnDeleteAt_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Delete At", nullptr));
        btnSort_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Sort", nullptr));
        lblElemAt_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Element at:", nullptr));
        lblTicketType_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Ticket Type:", nullptr));
        lblSumVal_PNR->setText(QString());
        lblCar_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Car:", nullptr));
        lblSeat_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Seat:", nullptr));
        lblPrice_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Price:", nullptr));
        btnNew_PNR->setText(QCoreApplication::translate("Lab09_PNR", "New", nullptr));
        lblPassengerName_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Passenger Name:", nullptr));
        btnSet_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Set", nullptr));
        comboBoxTicketType_PNR->setItemText(0, QCoreApplication::translate("Lab09_PNR", "Coupee", nullptr));
        comboBoxTicketType_PNR->setItemText(1, QCoreApplication::translate("Lab09_PNR", "Luxury", nullptr));
        comboBoxTicketType_PNR->setItemText(2, QCoreApplication::translate("Lab09_PNR", "Grygorii Doezhai Ne Doedezh", nullptr));

        lblMsgText_PNR->setText(QString());
        lblSum_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Sum:", nullptr));
        btnCalcSum_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Calc Sum", nullptr));
        lblPlace_PNR->setText(QCoreApplication::translate("Lab09_PNR", "Place:", nullptr));
        comboBoxPlace_PNR->setItemText(0, QCoreApplication::translate("Lab09_PNR", "Bottom", nullptr));
        comboBoxPlace_PNR->setItemText(1, QCoreApplication::translate("Lab09_PNR", "Upper", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Lab09_PNR: public Ui_Lab09_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB09_PNR_H
