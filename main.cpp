#include <QCoreApplication>
#include <iostream>
#include "move.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Start program\n";

    Move m1;
    m1.showmove();

    Move m2(2.0, 4.0);
    m2.showmove();

    m1 = m1.add(m2);
    m1.showmove();

    std::cout << "Done\n";
    return a.exec();
}
