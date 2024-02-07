#ifndef PANTOLONI_H
#define PANTOLONI_H
#include "artikl.h"
#include "datum.h"

class Pantoloni : public Artikl
{
public:
    Pantoloni();

private:
    Datum m_Datum_sledna_nabavka;
};

#endif // PANTOLONI_H
