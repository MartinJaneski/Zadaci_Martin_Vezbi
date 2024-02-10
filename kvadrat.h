#ifndef KVADRAT_H
#define KVADRAT_H

template<typename T>
class Kvadrat
{
public:
    Kvadrat(T strana);

    T strana() const;
    void setStrana(const T &newStrana);

private:
    T m_strana;

};

#endif // KVADRAT_H
