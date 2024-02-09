#include "ptici.h"

Ptici::Ptici() {}

void Ptici::Presmetaj_vakcinacija()
{
    int Validni_denovi[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int vak_mesec =getDatum_nosenje_vo_zoo().getMesec(),
        vak_den = getDatum_nosenje_vo_zoo().getDen(),
        vak_god = getDatum_nosenje_vo_zoo().getGodina();
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
    // print << den <<"/" << mesec <<"/" << godina<<endl;
}
