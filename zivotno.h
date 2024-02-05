#ifndef ZIVOTNO_H
#define ZIVOTNO_H
#include "datum.h"
#include "zadaca_1.h"

#include <QObject>


class Zivotno
{
public:
    // Zivotno(int bday = 1, int bmonth = 1, int byear = 2024,
    //         int zday = 1, int zmonth = 1, int zyear = 2024,
    //         char type = 'c', char sex = 'm', QString name = "Jane Doe") :
    //         Datum_ragjanje(bday, bmonth, byear),
    //         Datum_nosenje_vo_zoo(zday, zmonth, zyear)
    Zivotno();
    ~Zivotno();

    void Sleden_Vaksajn();
private:
    Datum Datum_ragjanje;
    Datum Datum_nosenje_vo_zoo;
    char tip;
    char Pol;
    QString ime;

};

#endif // ZIVOTNO_H
