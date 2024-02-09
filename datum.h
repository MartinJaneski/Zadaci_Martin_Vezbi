#ifndef DATUM_H
#define DATUM_H

#include <QObject>

class Datum
{
public:
    Datum(int = 1, int = 1, int = 2024);
    void print() const;
    ~Datum();

    void Vnesi_datum(int day, int month, int year);
    int getDen() const;

    int getMesec() const;
    void setMesec(int newMesec);

    int getGodina() const;
    void setGodina(int newGodina);

private:
    int den;
    int mesec;
    int godina;

};

#endif // DATUM_H
