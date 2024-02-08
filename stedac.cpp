#include "stedac.h"

Stedac::Stedac() {}

float Stedac::kamata()
{
    return m_kamata;
}

void Stedac::setKamata(float newKamata)
{
    m_kamata = newKamata;
}

int Stedac::broj_stedaci()
{
    return m_broj_stedaci;
}

void Stedac::setBroj_stedaci(int newBroj_stedaci)
{
    m_broj_stedaci = newBroj_stedaci;
}

int Stedac::bilans() const
{
    return m_bilans;
}

void Stedac::setBilans(int newBilans)
{
    m_bilans = newBilans;
}

int Stedac::kredit() const
{
    return m_kredit;
}

void Stedac::setKredit(int newKredit)
{
    m_kredit = newKredit;
}

Covek Stedac::lice() const
{
    return m_lice;
}

void Stedac::setLice(const Covek &newLice)
{
    m_lice = newLice;
}

