#include <QCoreApplication>
#include <QDebug>

#include "calculation.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<int> data;
    data << 0 << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9;

    qDebug() << "start program";
    qDebug() << "data:" << data;
    qDebug() << "sum_of_elements:" << sum_of_elements(data);

    qDebug() << "start random range:";
    for(int i = 0; i < 20; ++i)
         qDebug() << i << "random:" << random_range(10, 100);

    return a.exec();
}
