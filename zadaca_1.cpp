#include "zadaca_1.h"
#include "math.h"
#include "qlogging.h"
#include <QTextStream>
QTextStream out(stdout);
using namespace std;

zadaca_1::zadaca_1() {}

// naogjanje perimetar na n-agolnik:

float zadaca_1::Perimetar(int broj_agli, float dolz_strana)
{
    return broj_agli*dolz_strana;
}




// naogjanje plostina na n-agolnik:

float zadaca_1::Plostina(int broj_agli, float dolz_strana)
{
    return pow(dolz_strana, 2)/4 * tan(M_PI/2 - M_PI/broj_agli);
}




// resavanje 3x3 sistem ravenki koristejki zasebni koeficienti i Kramerov metod:

void zadaca_1::Sistem_Ravenki(int a1, int b1, int c1,int a2, int b2, int c2,int a3, int b3, int c3,int m1, int m2, int m3)
{
    float determinanta, determinantaX, determinantaY, determinantaZ;
    float x, y, z;

    determinanta = a1*(b2*c3 - b3*c2) - a2*(c3*b1 - b3*c1) + a3*(b1*c2 - b2*c1);
    determinantaX = m1*(b2*c3 - b3*c2) - m2*(c3*b1 - b3*c1) + m3*(b1*c2 - b2*c1);
    determinantaY = a1*(m2*c3 - m3*c2) - a2*(c3*m1 - m3*c1) + a3*(m1*c2 - m2*c1);
    determinantaZ = a1*(b2*m3 - b3*m2) - a2*(m3*b1 - b3*m1) + a3*(b1*m2 - b2*m1);

    x = determinantaX/determinanta;
    y = determinantaY/determinanta;
    z = determinantaZ/determinanta;
}




// resavanje 3x3 sistem ravenki preku posebna struktura za koeficientite na x, y, i z:

 void zadaca_1::SisRav(Sistem vek1, Sistem vek2, Sistem vek3, Sistem rez)
{
    float determinanta, determinantaX, determinantaY, determinantaZ;
    float x, y, z;

    determinanta = vek1.x*(vek2.y*vek3.z - vek3.y*vek2.z); // bla bla bla prodolzuva isto kako prethodno

    Sistem resenija;
    resenija.x = x;
    resenija.y = y;
    resenija.z = z;

}




// prirodni broevi chij kvadrat i kub zaedno gi sodrzat site cifri:

void zadaca_1::Kvadrat_i_Kub(int limit)
{
    int cifri[10]; //idejata e na poleto koe soodvetstvuva so cifrata da se stavi 1 ako ja ima, ili da ostane 0 ako ja nema
    int kvadrat, kub, pom2, pom3, pripagja = 1;
    for (int i = 100; i<=limit; i++)
    {
        kvadrat = pow(i,2);
        kub = pow(i,3);
        while(kvadrat)
        {
            pom2 = kvadrat%10;
            cifri[pom2] = 1; // ako se barase samo po ednas da gi ima cifrite, togas ke imavme cifri[pom2] = !cifri[pom2]
            kvadrat = kvadrat/10;
        }
        while(kub)
        {
            pom3 = kub%10;
            cifri[pom3] = 1; // ako se barase samo po ednas da gi ima cifrite, togas ke imavme cifri[pom3] = !cifri[pom3]
            kub = kub/10;
        }
        for (int j = 0; j<=9; j++)
        {
            if (cifri[j]==0)
            {
                pripagja = 0;
                break;
            }

        }
        if (pripagja)
        {
            out << "Broj cij kvadrat i kub gi sodrzat site cifri e:"<<i<< Qt::endl;
        }
        pripagja = 1;
        for (int j = 0; j<=9; j++)
            cifri[j] = 0;

    }
}



// n bakterii se delat na sekoi i minuti. na sekoi j minuti izumiraat x% od zhivite.
// kolku ke ima posle k minuti?

void zadaca_1::Broj_Bakterii(int pocetni_bak, int razmnozuvanje_minuti, int izumiranje_minuti, float procent, int vreme_observacija)
{
    int broj_bakterii = pocetni_bak;
    int izumreni;
    for (int i = 1; i <= vreme_observacija + 1; i++) //nepovrzano i so tekstot od zadacata
    {
        if (i % razmnozuvanje_minuti == 0)
            broj_bakterii = 2*broj_bakterii;

        if (i % izumiranje_minuti == 0)
        {
            izumreni = 0.01*procent * broj_bakterii;
            broj_bakterii = broj_bakterii - izumreni;
        }

    }
    out << "Brojot na bakterii posle "<<vreme_observacija<<"minuti iznesuva: "<<broj_bakterii<<Qt::endl;
}

// da se napravi stranicna piramidalna forma od brojot n rekurzivno:
/*
 * n
 * n-1 n
 * .......
 * 1 2 3... n-1 n
 * .......
 * n-1 n
 * n
 */

int n;
int factor = -1; //ova znaci deka ke namaluvame od n do 1 za k
void zadaca_1::Rekurzija_pechati(int k)
{
    for (int i = k; i<=n; i++)
    {
        out<<i<<" ";
    }

    if (k==1)
        factor = 1; //sega ke zgolemuvame od 1, pa se do n

    if(!(factor == 1 && k == n))
    {
        return Rekurzija_pechati(k+factor);
    }

}
//asd


// 2D polinja zadaca 13 od C_PREDAVANJA word file "09_zadaci za domasno":

void zadaca_1::Generiranje_polinja(int red, int kol)
{
    int k = 1;
    int obratno = 0; // sekogas dodavame od gore nadolu, samo gledame dali treba da se zgolemuva k ili namaluva
    int pole[red][kol];
    for (int i = 0; i<red; i++)
        for(int j = 0; j<kol; j++)
        {
            pole[i][j] = k;

            if (!obratno)
                k++;
            if (obratno)
                k--;

            if (j == kol-1)
            {
                obratno = !obratno;
                k = pole[i][j]+red; // se koristi svojstvoto deka pole[i+1][0] = pole[i][kol-1] + red
            }

        }
    for (int i = 0; i < red; i++)
    {
        out<<Qt::endl;
        for (int j = 0; j < kol; j++)
            out << pole[i][j];
    }
}
// test



