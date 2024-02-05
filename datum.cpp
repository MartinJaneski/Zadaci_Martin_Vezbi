#include "datum.h"

Datum::Datum(int day, int month, int year)
{
    if (month >= 1 && month <= 12)
        mesec = month;
    godina = year;
    den = Validen_den(day, mesec);
}

int Datum::Validen_den(int day, int month)
{
    int Validni_denovi[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // if prestapna treba, pa so toa da se dozvoli day = 29 ako month = 2
    if (day >= 1 && day <= Validni_denovi[month - 1])
        return day;
}
