#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

void dzielenie(int a, int b) {
    if (b == 0 || a % b != 0) {
        throw invalid_argument("b nie moze byc rowne 0 i wynik musi byc liczba naturalna.");
    }
    cout<<a/b<<endl;
}
int main() {
    int a, b;
    try {
        cout << "Podaj pierwsza liczbe naturalna: ";
        cin >> a;
        cout << "Podaj druga liczbe naturalna: ";
        cin >> b;
        dzielenie(a, b);
    }

        catch(invalid_argument& e)
        {
            cerr << e.what() << endl;
            return -1;
        }
    return 0;
}