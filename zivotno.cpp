#include "zivotno.h"

Zivotno::Zivotno() {}

void Zivotno::Set_Birth_date(int day, int month, int year)
{
    Datum_ragjanje.Vnesi_datum(day, month, year);
}

void Zivotno::Set_nosenje_date(int day, int month, int year)
{
    Datum_nosenje_vo_zoo.Vnesi_datum(day, month, year);
}

void Zivotno::Sleden_Vaksajn()
{

}
