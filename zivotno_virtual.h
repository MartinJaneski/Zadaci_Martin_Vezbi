#ifndef ZIVOTNO_VIRTUAL_H
#define ZIVOTNO_VIRTUAL_H
#include "datum.h"
#include <QString>

class zivotno_virtual
{
public:
    zivotno_virtual();
    void print() const;
    ~zivotno_virtual();

    void Set_Birth_date(int day, int month, int year);
    void Set_nosenje_date(int day, int month, int year);
    void Postavi_karakteristiki(char sex, QString name); //istoto e napraveno vo mnogu slicna zadaca prethodno

    virtual void Presmetaj_vakcinacija();

    Datum getDatum_nosenje_vo_zoo() const;
    void setDatum_nosenje_vo_zoo(const Datum &newDatum_nosenje_vo_zoo);

private:
    Datum Datum_ragjanje;
    Datum Datum_nosenje_vo_zoo;
    char Pol;
    QString ime;

};

#endif // ZIVOTNO_VIRTUAL_H
