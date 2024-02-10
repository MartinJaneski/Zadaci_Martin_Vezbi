#include "kvadrat.h"
#include "QDebug"

template<typename T>
/* errorot kaj konstruktor ne znam zosto se pojavuva.
 * googlanje i chatgpt ne bea mnogu od korist
 ask Mia later probably */
Kvadrat<T>::Kvadrat()
{
    qDebug()<<"test";
}

template<typename T>
T Kvadrat<T>::strana() const
{
    return m_strana;
}

template<typename T>
void Kvadrat<T>::setStrana(const T &newStrana)
{
    m_strana = newStrana;
}

template class Kvadrat<double>;
