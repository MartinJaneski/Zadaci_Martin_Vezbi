#include "dropki.h"

Dropki::Dropki() {}


void Dropki::setBroitel(int newBroitel)
{
    m_broitel = newBroitel;
}

void Dropki::setImenitel(int newImenitel)
{
    m_imenitel = newImenitel;
}



int Dropki::broitel() const
{
    return m_broitel;
}

int Dropki::imenitel() const
{
    return m_imenitel;
}



void Dropki::set_broitel_imenitel(int num, int den)
{
    setBroitel(num);
    if (den)
        setImenitel(den);
    else
        setImenitel(1);
}

// funkcija koja ke gi uprosti dropkite
void Dropki::Uprosti()
{
    int min, NZD=1;
    int num, den;
    num = this->m_broitel;
    den = this->m_imenitel;
    // ako se isti broitelot i imenitelot da vrati 1/1
    if (num == den)
    {
        this->m_broitel = 1;
        this->m_imenitel = 1;
    }
    else if (num < den)
        min = num;
    else
        min = den;

    // naogjanje najmal zaednicki delitel na broitel i imenitel
    for (int i=2; i <= min/2; i++)
    {
        if (num%i==0 && den%i == 0)
            NZD = i;
    }
    // od optimiziracki pricini gore naogja samo do min/2, a tuka doproveruva za dali min e NZD
    if (num%min==0 && den%min==0)
    {
        NZD = min;
    }

    this->m_broitel /= NZD;
    this->m_imenitel /= NZD;
}


Dropki Dropki::operator+(const Dropki &other) const
{
    int delitel;
    Dropki Zbir_Dropki;
    Zbir_Dropki.setBroitel(this->broitel()*other.imenitel() + this->imenitel()*other.broitel());
    Zbir_Dropki.setImenitel(this->imenitel()*other.imenitel());

    Zbir_Dropki.Uprosti();

    return Zbir_Dropki;
}

Dropki Dropki::operator+(int Cel_broj) const
{
    Dropki Zbir_CelBroj;
    Zbir_CelBroj.setBroitel(this->broitel() + this->imenitel()*Cel_broj);
    Zbir_CelBroj.setImenitel(this->imenitel());

    Zbir_CelBroj.Uprosti();

    return Zbir_CelBroj;
}

Dropki Dropki::operator/(const Dropki &other) const
{
    Dropki Delenje_Dropki;
    Delenje_Dropki.setBroitel(this->broitel() * other.imenitel());
    Delenje_Dropki.setImenitel(this->imenitel() * other.broitel());

    Delenje_Dropki.Uprosti();

    return Delenje_Dropki;
}
