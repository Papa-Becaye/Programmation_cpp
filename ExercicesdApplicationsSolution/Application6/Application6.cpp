#include <iostream>
using namespace std;

int main()
{
    int d = 0, a, b = 0, c = 0;

    cout << "Veuillez saisir la valeur du coefficient a (a != 0): ";
    cin >> a;
    cout << "Veuillez saisir la valeur du coefficient b: ";
    cin >> b;
    cout << "Veuillez saisir la valeur du coefficient c: ";
    cin >> c;

    d = (b * b - (4 * a * c));
    if (d < 0) {
        cout << "l'equation n'admet pas de solution...\n";
    }
    else if (d == 0) {
        cout << "l'equation n'admet qu'une solution...\n";
    }
    else {
        cout << "l'equation admet deux solutions...\n";
    }

}
