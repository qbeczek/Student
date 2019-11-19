#include <iostream>
#include "class.h"

int main()
    {
        const int size=5;

        Grupa grupa1(size);
        grupa1.wypelnij(size);
        grupa1.wyswietl(size+1);
        std::cout<<"_____\n";

        grupa1.dodajZwieksz(size);
        grupa1.wyswietl(size+2);

        grupa1+=size+1;
        grupa1.wyswietl(size+3);

        return 0;
    }
