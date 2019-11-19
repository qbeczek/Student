#include <iostream>
#include "class.h"

Student::Student()
{
    ocena=3;
}

Student::Student(int aocena)
{
    ocena=aocena;
    sprawdz();
}

Student::Student(Student& astudent)
{
    astudent.ocena=astudent.ocena/2;
    ocena=astudent.ocena;
    numer=(astudent.numer+1);
}


void Student::sprawdz()
{
    if(ocena>8||ocena<0) ocena=0;
}

int Student::oddaj()
{
    return ocena;
}

int Student::oddajNumer()
{
    return numer;
}

void Student::wez(int liczbaStudentow)
{
    std::cin>>ocena;
    numer = liczbaStudentow + 1;
    sprawdz();
}

void Student::ustaw()
{
    numer=1;
    ocena=8;
}

void Student::zwiekszOcene()
{
    ocena++;
}

Grupa& Grupa::operator++(int)
{
    for(int i=0;i<5;i++)
    {
        Studenci[i].zwiekszOcene();
    }
}

Grupa::Grupa(int liczbaStudentow)
{
        Student Studenci[liczbaStudentow];
}

Grupa::~Grupa()
{
        std::cout << "destruktorGrupa" << std::endl;
}

void  Grupa::wypelnij(int liczbaStudentow)
{
    Studenci[0].ustaw();
    for(int i=0;i<liczbaStudentow;++i)
    {
        Student pom=Studenci[i];
        Studenci[i+1]=pom;
    }
}

void Grupa::wyswietl(int liczbaStudentow)
{
    for(int i=0;i<liczbaStudentow;++i)
    {
        std::cout<<"ocena studenta "<< Studenci[i].oddajNumer() <<" = "<<Studenci[i].oddaj()<<std::endl;
    }
}

void Grupa::_zwiekszPamiec(int liczbaStudentow)
{
    *this = Grupa(liczbaStudentow);
}

void Grupa::dodajZwieksz(int liczbaStudentow)
{
    _zwiekszPamiec(liczbaStudentow+1);
    Studenci[liczbaStudentow+1].wez(liczbaStudentow+1);
}
