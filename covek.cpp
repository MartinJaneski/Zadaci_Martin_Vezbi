#include "covek.h"
#include <QString>

Covek::Covek() {}

QString Covek::Ime() const
{
    return m_Ime;
}

void Covek::setIme(const QString &newIme)
{
    m_Ime = newIme;
}

QString Covek::Prezime() const
{
    return m_Prezime;
}

void Covek::setPrezime(const QString &newPrezime)
{
    m_Prezime = newPrezime;
}

QString Covek::Adresa() const
{
    return m_Adresa;
}

void Covek::setAdresa(const QString &newAdresa)
{
    m_Adresa = newAdresa;
}

int Covek::Telefon_broj() const
{
    return m_Telefon_broj;
}

void Covek::setTelefon_broj(int newTelefon_broj)
{
    m_Telefon_broj = newTelefon_broj;
}
