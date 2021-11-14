#include<iostream>
using namespace std;

class Pojazd{
private:
    static int najnowsza_wersja_oprogramowania;
    int zainstalowana_wersja_oprogramowania;
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
    void wypisz_oprogramowanie();
    void zaktualizuj_oprogramowanie();
    static void funkcja_najnowsza_wersja_oprogramowania(int nowa_wersja);
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
        zainstalowana_wersja_oprogramowania = pojazd.zainstalowana_wersja_oprogramowania;
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
int Pojazd::najnowsza_wersja_oprogramowania = 1;

void Pojazd::wypisz_oprogramowanie() {
    cout << "Pojazd: " << nazwa << "\tZainstalowana wersja oprogramowania: " << zainstalowana_wersja_oprogramowania << "\tNajnowsza wersja oprogramowania: " << najnowsza_wersja_oprogramowania << endl;
}

void Pojazd::zaktualizuj_oprogramowanie() {
    zainstalowana_wersja_oprogramowania = najnowsza_wersja_oprogramowania;
}

void Pojazd::funkcja_najnowsza_wersja_oprogramowania(int nowaWersja) {
    najnowsza_wersja_oprogramowania = nowaWersja;
}
int main(){
    Pojazd p1("KR18634", "Panda", 5, "Fiat", "osobowe");
    Pojazd p2("KRA14731","Zafira",7,"Opel","osobowe");

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


    //stałe

    cout << "\n\nZadania stale:\n";
    p1.set_nazwa("Punto");

    cout << "\nWersja oprogramowania:\n";
    p1.wypisz_oprogramowanie();
    p2.wypisz_oprogramowanie();

    cout << "\nNowa wersja oprogramowania...\n";
    Pojazd::funkcja_najnowsza_wersja_oprogramowania(2);


    cout << "\nWersja oprogramowania:\n";
    p1.wypisz_oprogramowanie();
    p2.wypisz_oprogramowanie();

    cout << "\nZaktualizowanie p1...\n";
    p1.zaktualizuj_oprogramowanie();

    cout << "\nWersja oprogramowania:\n";
    p1.wypisz_oprogramowanie();
    p2.wypisz_oprogramowanie();

    return 0;
}