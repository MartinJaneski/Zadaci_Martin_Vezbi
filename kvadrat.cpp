#include "kvadrat.h"

Kvadrat::Kvadrat() {}

T Kvadrat::strana() const
{
    return m_strana;
}

void Kvadrat::setStrana(const T &newStrana)
{
    m_strana = newStrana;
}

