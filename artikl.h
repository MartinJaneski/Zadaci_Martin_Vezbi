#ifndef ARTIKL_H
#define ARTIKL_H
#include <QString>
#include "datum.h"

class Artikl
{
public:
    Artikl();

    int Golemina() const;
    void setGolemina(int newGolemina);

    int Cena() const;
    void setCena(int newCena);

    QString Ime_na_artikl() const;
    void setIme_na_artikl(const QString &newIme_na_artikl);

    Datum Donesen_vo_prodavnica() const;
    void setDonesen_vo_prodavnica(const Datum &newDonesen_vo_prodavnica);

private:
    QString m_Ime_na_artikl;
    int m_Golemina;
    int m_Cena;
    Datum m_Donesen_vo_prodavnica;
};

#endif // ARTIKL_H
