#ifndef ZIVOTNO_H
#define ZIVOTNO_H
#include "datum.h"
#include "zadaca_1.h"

#include <QObject>


class Zivotno
{
public:
    Zivotno();
    void print() const;
    ~Zivotno();
    void Set_Birth_date(int day, int month, int year);
    void Set_nosenje_date(int day, int month, int year);
    void Sleden_Vaksajn();
    void Postavi_karakteristiki(char type, char sex, QString name);

private:
    Datum Datum_ragjanje;
    Datum Datum_nosenje_vo_zoo;
    char tip;
    char Pol;
    QString ime;

};

#endif // ZIVOTNO_H
