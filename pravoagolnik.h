#ifndef PRAVOAGOLNIK_H
#define PRAVOAGOLNIK_H
//#include "pravoagolnik.cpp"

template<typename T>
class Pravoagolnik
{
public:

    Pravoagolnik(T dolzina, T sirina);

    T dolzina() const;
    void setDolzina(const T &newDolzina);

    T shirina() const;
    void setShirina(const T &newShirina);

private:
    T m_dolzina;
    T m_shirina;
};

//#include "pravoagolnik.cpp"
#endif // PRAVOAGOLNIK_H
