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
    void wez();
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
     void _zwiekszPamiec(Grupa& agrupa,int liczbaStudentow);
};

#endif // CLASS_H
