#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "kvadrat.h"
#include "pravoagolnik.h"


typedef struct
{
    float x, y, z;
}Sistem;




// vo main e zadacata za templates, ova tuka e samo funkcija za da ne prepisuvam ist kod

void Kreiraj_soodvetna_klasa(QFile& Datoteka)
{
    if (!Datoteka.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Ne moze da se otvori tekst fajl 1";
        return;
    }

    QTextStream vnatre(&Datoteka);
    int Kakva_figura;
    vnatre >> Kakva_figura;

    if (Kakva_figura == 1)
    {
        double Shirina, Dolzhina;
        vnatre >> Shirina >> Dolzhina;

        Pravoagolnik<double> pravoagolnik(Shirina, Dolzhina); // kreirame objekt pravoagolnik

        qDebug() << "Prevzemeni se stranite na pravoagolnikot";
    }

    else if (Kakva_figura == 2)
    {
        double Dolzhina_strana;
        vnatre >> Dolzhina_strana;

        Kvadrat<double> kvadrat(Dolzhina_strana); // kreirame objekt kvadrat

        qDebug() << "Prevzemena e stranata na kvadratot";
    }

    else
    {
        qDebug() << "Nema soodvetni informacii";
    }
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QFile Datoteka_1("tekst_fajl_1.txt");
    Kreiraj_soodvetna_klasa(Datoteka_1);

    QFile Datoteka_2("tekst_fajl_2.txt");
    Kreiraj_soodvetna_klasa(Datoteka_2);



    return a.exec();
}
