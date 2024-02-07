#ifndef DROPKI_H
#define DROPKI_H

class Dropki
{
public:
    Dropki();
    void set_broitel_imenitel(int num, int den);

    void setBroitel(int newBroitel);
    void setImenitel(int newImenitel);
    int broitel() const;
    int imenitel() const;

    Dropki operator+(const Dropki& other) const;
    Dropki operator+(int Cel_broj) const;

    Dropki operator/(const Dropki &other) const;

    //int NZD(const Dropki dropka);
private:
    int m_broitel;
    int m_imenitel;

    void Uprosti();
};

#endif // DROPKI_H
