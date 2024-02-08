#ifndef COVEK_H
#define COVEK_H
#include <QString>

class Covek
{
    friend class Stedac;

public:
    Covek();

    QString Ime() const;
    void setIme(const QString &newIme);

    QString Prezime() const;
    void setPrezime(const QString &newPrezime);

    QString Adresa() const;
    void setAdresa(const QString &newAdresa);

    int Telefon_broj() const;
    void setTelefon_broj(int newTelefon_broj);

private:
    QString m_Ime;
    QString m_Prezime;
    QString m_Adresa;
    int m_Telefon_broj;
};

#endif // COVEK_H
