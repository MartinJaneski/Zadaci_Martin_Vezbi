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

void Zivotno::Postavi_karakteristiki(char type, char sex, QString name)
{
    switch(type)
    {
    case 'c':
    case 'v':
    case 'p':
        tip = type;
        break;
    default:
        //error
    }

    if (sex == 'm' || sex == 'z')
        Pol = sex;

    ime = name;
}

void Zivotno::Sleden_Vaksajn()
{
    int Validni_denovi[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int vak_mesec = Datum_nosenje_vo_zoo.mesec,
        vak_den = Datum_nosenje_vo_zoo.den,
        vak_god = Datum_nosenje_vo_zoo.godina;

    switch(tip)
    {
    case 'c':
        // "Sledna vakcinacija na " datum_nosenje_vo_zoo.den, datum_nosenje_vo_zoo.mesec, datum_nosenje_vo_zoo.godina+1;
        break;
    case 'v':
        vak_mesec += 8;
        if (vak_mesec > 12)
        {
            vak_mesec = vak_mesec - 12;
            vak_god++;
        }
        if (vak_den > Validni_denovi[vak_mesec - 1])
        {
            vak_den = vak_den - Validni_denovi[vak_mesec-1];
            vak_mesec++;
        }
        break;
    case 'p':
        vak_mesec += 6;
        if (vak_mesec > 12)
        {
            vak_mesec = vak_mesec - 12;
            vak_god++;
        }
        if (vak_den > Validni_denovi[vak_mesec - 1])
        {
            vak_den = vak_den - Validni_denovi[vak_mesec-1];
            vak_mesec++;
        }
        break;
    }
}
