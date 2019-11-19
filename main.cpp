#include <iostream>
#include "class.h"
    int main()
    {
        const int size=5;
        Grupa grupa1(size);
        grupa1.wypelnij(size);
        grupa1.wyswietl(size);
        std::cout<<"_____\n";

       // grupa1._zwiekszPamiec(size);

        grupa1.dodajZwieksz(size);
        grupa1.wyswietl(size+2);
        std::cout<<"eko" << std::endl;

        return 0;
    }
