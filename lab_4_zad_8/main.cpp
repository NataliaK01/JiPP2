#include<iostream>

using namespace std;

class Student
{
private:
    string imie;
    string nazwisko;
    int nr_albumu;
    double liczba_pytan;
    double poprawne_odpowiedzi;

public:
    void set_dane(string imie, string nazwisko, int nr_albumu, double liczba_pytan, double poprawne_odpowiedzi){
        this-> imie = imie;
        this-> nazwisko = nazwisko;
        this-> nr_albumu = nr_albumu;
        this-> liczba_pytan = liczba_pytan;
        this-> poprawne_odpowiedzi = poprawne_odpowiedzi;
    }
    double procent(double pytania, double poprawne_odp) {
        return (poprawne_odp / pytania) * 100;
    }

};

int main(){

    Student dane;
    string imie, nazwisko;
    int nr_albumu;
    double liczba_pytan;
    double poprawne_odpowiedzi;
    cout<<"Podaj imie: "<<endl;
    cin>>imie;
    cout<<"Podaj nazwisko: "<<endl;
    cin>>nazwisko;
    cout<<"Podaj numer albumu: "<<endl;
    cin>>nr_albumu;
    cout<<"Podaj liczbe pytan: "<<endl;
    cin>>liczba_pytan;
    cout<<"Podaj liczbe poprawnych odpowiedzi: "<<endl;
    cin>>poprawne_odpowiedzi;
    dane.set_dane(imie, nazwisko, nr_albumu, liczba_pytan, poprawne_odpowiedzi);
    double wynik = dane.procent( liczba_pytan, poprawne_odpowiedzi);
    cout<<imie<<"\t"<<nazwisko<<"\t"<<nr_albumu<<"\n"<<"Wynik = "<<wynik<<"%"<<endl;



    cout<<endl;
    return 0;
}
