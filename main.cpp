#include <QCoreApplication>
#include <vector>

typedef struct
{
    float x, y, z;
}Sistem;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
