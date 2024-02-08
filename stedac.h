#ifndef STEDAC_H
#define STEDAC_H
#include "covek.h"
#include <QString>
#include <QDebug>


class Stedac
{
public:
    Stedac();

    static float kamata();
    static void setKamata(float newKamata);

    static int broj_stedaci();
    static void setBroj_stedaci(int newBroj_stedaci);

    int bilans() const;
    void setBilans(int newBilans);

    int kredit() const;
    void setKredit(int newKredit);

    Covek lice() const;
    void setLice(const Covek &newLice);

private:
    static float m_kamata;
    static int m_broj_stedaci;
    int m_bilans;
    int m_kredit;
    Covek m_lice;
};

#endif // STEDAC_H
