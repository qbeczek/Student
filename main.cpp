#include <iostream>
#include "class.h"
    int main()
    {
        const int size=8;
        Grupa grupa1(size);
        grupa1.wypelnij(size);
        grupa1.wyswietl(size);
        std::cout<<"_____\n";
        Grupa grupa2(size);

        std::cout<<"eko" << std::endl;
        grupa1.wyswietl(size+2);
        return 0;
    }
