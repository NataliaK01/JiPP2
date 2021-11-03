#include<iostream>

using namespace std;

class Student
{
public:
    string imie;
    string nazwisko;
    int nr_albumu;
    double liczba_pytan;
    double poprawne_odpowiedzi;
};
double procent(double pytania, double poprawne_odp) {
    return (poprawne_odp / pytania) * 100;
}

int main(){

    Student dane;
    cout<<"Podaj imie: "<<endl;
    cin>>dane.imie;
    cout<<"Podaj nazwisko: "<<endl;
    cin>>dane.nazwisko;
    cout<<"Podaj numer albumu: "<<endl;
    cin>>dane.nr_albumu;
    cout<<"Podaj liczbe pytan: "<<endl;
    cin>>dane.liczba_pytan;
    cout<<"Podaj liczbe poprawnych odpowiedzi: "<<endl;
    cin>>dane.poprawne_odpowiedzi;
    double wynik = procent(dane.liczba_pytan, dane.poprawne_odpowiedzi);
    cout<<dane.imie<<"\t"<<dane.nazwisko<<"\t"<<dane.nr_albumu<<"\n"<<"Wynik = "<<wynik<<"%"<<endl;



    cout<<endl;
    return 0;
}
