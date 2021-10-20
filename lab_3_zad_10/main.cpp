#include <cstdlib>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <exception>
#include "string"

using namespace std;

int main() {
    string a;
    int number;
    try {
        cout << "Podaj ciag znakow: ";
        cin >> a;
        number = stoi(a);
        cout << a;

    }
    catch(invalid_argument e)
    {
        cout << "Wprowadzony ciag zawiera nieprawidlowe znaki!";
    }
    catch(out_of_range e)
    {
        cout << "Wprowadzona liczba jest za duża!";
    }

    return 0;
}