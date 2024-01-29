#ifndef ZADACA_1_H
#define ZADACA_1_H


typedef struct
{
    float x, y, z;
}Sistem;


class zadaca_1
{
public:
    zadaca_1();
    float Perimetar(int broj_agli, float dolz_strana);
    float Plostina(int broj_agli, float dolz_strana);
    void Sistem_Ravenki(int a1, int b1, int c1, int a2, int b2, int c2, int a3, int b3, int c3, int m1, int m2, int m3);

    //Definiram nov tip na podatok narecen Sistem:
    typedef struct
    {
        float x, y, z;
    }Sistem;

    void SisRav(Sistem vek1, Sistem vek2, Sistem vek3, Sistem rez);
    void Kvadrat_i_Kub(int limit);
    void Broj_Bakterii(int pocetni_bak, int razmnozuvanje_minuti, int izumiranje_minuti, float procent, int vreme_observacija);
    void Rekurzija_pechati(int k, int flag);
    void Rekurzija_pechati(int k);
    void Generiranje_polinja(int red, int kol);
};

#endif // ZADACA_1_H
