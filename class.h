#ifndef CLASS_H
#define CLASS_H


class Student
{
    int ocena;
    int numer;

public:
    Student();
    Student(int aocena);
    Student(Student & astudent);

    void sprawdz();
    int oddaj();
    int oddajNumer();
    void wez(int);
    void ustaw();
    void zwiekszOcene();

};

class Grupa
     :public Student
{
     Student Studenci[];

public:
     Grupa(int liczbaStudentow);
     Grupa& operator++(int);


     ~Grupa();

     void wypelnij(int liczbaStudentow);
     void wyswietl(int liczbaStudentow);

     void _zwiekszPamiec(int liczbaStudentow);
     void dodajZwieksz(int);
};

#endif // CLASS_H
