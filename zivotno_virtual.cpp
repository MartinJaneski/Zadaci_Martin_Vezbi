#include "zivotno_virtual.h"

zivotno_virtual::zivotno_virtual() {}

void zivotno_virtual::Set_Birth_date(int day, int month, int year)
{
    Datum_ragjanje.Vnesi_datum(day, month, year);
}

void zivotno_virtual::Set_nosenje_date(int day, int month, int year)
{
    Datum_nosenje_vo_zoo.Vnesi_datum(day, month, year);
}



Datum zivotno_virtual::getDatum_nosenje_vo_zoo() const
{
    return Datum_nosenje_vo_zoo;
}

void zivotno_virtual::setDatum_nosenje_vo_zoo(const Datum &newDatum_nosenje_vo_zoo)
{
    Datum_nosenje_vo_zoo = newDatum_nosenje_vo_zoo;
}


void zivotno_virtual::Presmetaj_vakcinacija()
{
    //"getDatum_nosenje_vo_zoo();"
}
