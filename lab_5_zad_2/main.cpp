#include<iostream>
using namespace std;

class Pojazd{
public:
    Pojazd(string numer_rejestracyjny, string nazwa, int ilosc_miejsc, string marka, string typ);
    Pojazd(Pojazd& pojazd);
    string numer_rejestracyjny;
    string nazwa;
    int ilosc_miejsc;
    string *tab;
    string marka;
    string typ;

    void wypisz();
    void zamiana(int numer_miejsca, string imie_nazwisko){

        tab[numer_miejsca] = imie_nazwisko;
    }

    string get_nazwa();
    string get_numer_rejestracyjny();
    string get_marka();
    string get_typ();
    void set_nazwa(string nazwa);
    void set_numer_rejestracyjny(string numer_rejestracyjny);
    ~Pojazd();
};

Pojazd::Pojazd(string numer_rejestracyjny, string nazwa, int ilosc_miejsc, string marka, string typ)
:numer_rejestracyjny(numer_rejestracyjny)
, nazwa(nazwa)
, ilosc_miejsc(ilosc_miejsc)
, marka(marka)
, typ(typ) {
    this->tab = new std::string[ilosc_miejsc];
    for (int i = 0; i < ilosc_miejsc; i++) {
        this->tab[i] = "PUSTE";
    }
}

Pojazd::~Pojazd()
{
    delete [] tab;
}

    Pojazd::Pojazd(Pojazd& pojazd){
        numer_rejestracyjny = pojazd.numer_rejestracyjny;
        nazwa = pojazd.nazwa;
        ilosc_miejsc = pojazd.ilosc_miejsc;
        tab = new std::string[ilosc_miejsc];
        marka = pojazd.marka;
        typ = pojazd.typ;
        for (int i = 0; i < ilosc_miejsc; i++) {
            tab[i] = pojazd.tab[i];
        }
    }
void Pojazd::wypisz(){

    cout<<"Numer rejestracyjny:  "<<numer_rejestracyjny<<endl;
    cout<<"Nazwa:  "<<nazwa<<endl;
    cout<<"Ilosc miejsc:  "<<ilosc_miejsc<<endl;
    cout<<"Marka:  "<<marka<<endl;
    cout<<"Typ:  "<<typ<<endl;
}


void Pojazd::set_nazwa(string nazwa) {
    this->nazwa = nazwa;
}
void Pojazd::set_numer_rejestracyjny(string numer_rejestracyjny) {
    this->numer_rejestracyjny = numer_rejestracyjny;
}
string Pojazd::get_nazwa(){
    return nazwa;
}

string Pojazd::get_numer_rejestracyjny(){
    return numer_rejestracyjny;
}

string Pojazd::get_marka(){
    return marka;
}

string Pojazd::get_typ(){
    return typ;
}
int main(){
    Pojazd p1("KR18634", "Panda", 5, "Fiat", "osobowe");
    Pojazd p2("KRA147321","P2",8,"Ford","bus");

    p1.wypisz();
    p2.wypisz();
    Pojazd p1_kopia(p1);
    cout<<"\nDane po zmianie"<<endl;
    //zmiana danych
    p1.zamiana(2,"Ola");
    p1.wypisz();

    cout<<"\nSkopiowane dane"<<endl;
    p1_kopia.wypisz();

    cout<<"\nGettery"<<endl;
    cout<<"\nNazwa: "<<p1.get_nazwa()<<"\nMarka: "<<p1.get_marka()<<"\nTyp: "<<p1.get_typ()<<"\nNumer rejestracyjny: "<<p1.get_numer_rejestracyjny()<<endl;

    cout<<"\nSettery"<<endl;
    p1.set_nazwa("Ps1");
    p1.set_numer_rejestracyjny("KRA6543");
    cout<<"\nDane po nowych setterach\n";
    p1.wypisz();

    return 0;
}