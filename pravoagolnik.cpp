#include "pravoagolnik.h"
#include "QDebug"

template<typename T>
Pravoagolnik::Pravoagolnik()
{
    qDebug()<<"Konstruktor";
}

template<typename T>
T Pravoagolnik<T>::dolzina() const
{
    return m_dolzina;
}

template<typename T>
void Pravoagolnik<T>::setDolzina(const T &newDolzina)
{
    m_dolzina = newDolzina;
}

template<typename T>
T Pravoagolnik<T>::shirina() const
{
    return m_shirina;
}

template<typename T>
void Pravoagolnik<T>::setShirina(const T &newShirina)
{
    m_shirina = newShirina;
}

template class Pravoagolnik<double>;
