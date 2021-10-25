#include<iostream>
#include<string>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    double silnik;
};
int main()
{
    samochod opel1 ={"Opel","Astra",2015,"czerwony", 1.4};
    samochod opel2 ={"Opel","Zafira",2013,"zielony",2.0};
    samochod opel3 ={"Opel","Corsa",2016,"bialy", 1.4};
    samochod opel4 ={"Opel","vivaro",2014,"czarny", 1.9};

    cout << "Marka\tModel \tRok produkcji \tKolor \tSilnik" << endl;
    cout << "----------------------------------" << endl;

    cout<<opel1.marka<<" | "<<opel1.model<<" | "<<opel1.rok_produkcji
        <<" | "<<opel1.kolor<<" | "<<opel1.silnik;
    cout<<endl;
    cout<<opel2.marka<<" | "<<opel2.model<<" | "<<opel2.rok_produkcji
        <<" | "<<opel2.kolor<<" | "<<opel2.silnik;
    cout<<endl;
    cout<<opel3.marka<<" | "<<opel3.model<<" | "<<opel3.rok_produkcji
        <<" | "<<opel3.kolor<<" | "<<opel3.silnik;
    cout<<endl;
    cout<<opel4.marka<<" | "<<opel4.model<<" | "<<opel4.rok_produkcji
        <<" | "<<opel4.kolor<<" | "<<opel4.silnik;
    cout<<endl;

    return 0;
}