#include "artikl.h"

Artikl::Artikl() {}

// GETERI I SETERI
int Artikl::Golemina() const
{
    return m_Golemina;
}

void Artikl::setGolemina(int newGolemina)
{
    m_Golemina = newGolemina;
}

int Artikl::Cena() const
{
    return m_Cena;
}

void Artikl::setCena(int newCena)
{
    m_Cena = newCena;
}

QString Artikl::Ime_na_artikl() const
{
    return m_Ime_na_artikl;
}

void Artikl::setIme_na_artikl(const QString &newIme_na_artikl)
{
    m_Ime_na_artikl = newIme_na_artikl;
}

Datum Artikl::Donesen_vo_prodavnica() const
{
    return m_Donesen_vo_prodavnica;
}

void Artikl::setDonesen_vo_prodavnica(const Datum &newDonesen_vo_prodavnica)
{
    m_Donesen_vo_prodavnica = newDonesen_vo_prodavnica;
}
//

