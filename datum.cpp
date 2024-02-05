#include "datum.h"

Datum::Datum(int day, int month, int year){}

void Datum::Vnesi_datum(int day, int month, int year)
{
    int Validni_denovi[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    godina = year;
    if (month >= 1 && month <= 12)
        mesec = month;

    //tuka treba da ima za prestapna, ako e prestapna da se dozvoli fevruari da ima 29 dena
    if (day >= 1 && day <= Validni_denovi[mesec-1])
        den = day;
}

int Datum::getDen() const
{
    return den;
}


