#include <iostream>
#include "class.h"
    int main()
    {
        const int size=3;
        Grupa grupa1(size);
        grupa1.wypelnij(size);
        grupa1.wyswietl(size+2);
        std::cout<<"_____\n";

        grupa1.dodajZwieksz(size);
        grupa1.wyswietl(size+2);
        grupa1.dodajZwieksz(size+1);
        grupa1.wyswietl(size+3);
        std::cout<<"eko" << std::endl;

        return 0;
    }
