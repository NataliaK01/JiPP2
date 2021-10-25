#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
};
int main()
{
    samochod opel1 ={"Opel","Astra",2015,"czerwony"};
    samochod opel2 ={"Opel","Zafira",2013,"zielony"};
    samochod opel3 ={"Opel","Corsa",2016,"bialy"};
    samochod opel4 ={"Opel","vivaro",2014,"czarny"};

    cout << "Marka\tModel \tRok produkcji \tKolor" << endl;
    cout << "----------------------------------" << endl;

    cout<<opel1.marka<<" "<<opel1.model<<" "<<opel1.rok_produkcji
        <<" "<<opel1.kolor<<" ";
    cout<<endl;
    cout<<opel2.marka<<" "<<opel2.model<<" "<<opel2.rok_produkcji
        <<" "<<opel2.kolor<<" ";
    cout<<endl;
    cout<<opel3.marka<<" "<<opel3.model<<" "<<opel3.rok_produkcji
        <<" "<<opel3.kolor<<" ";
    cout<<endl;
    cout<<opel4.marka<<" "<<opel4.model<<" "<<opel4.rok_produkcji
        <<" "<<opel4.kolor<<" ";
    cout<<endl;

    return 0;
}

