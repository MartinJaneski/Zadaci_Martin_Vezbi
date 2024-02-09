#ifndef PTICI_H
#define PTICI_H
#include "zivotno_virtual.h"

class Ptici : public zivotno_virtual
{
public:
    Ptici();

    void Presmetaj_vakcinacija() override;

private:
    bool m_letaci;
};

#endif // PTICI_H
