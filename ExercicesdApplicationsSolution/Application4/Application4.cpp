#include <iostream>
using namespace std;

int main()
{
    int delta = 0, a = 0, b = 0, c = 0;

    cout << "Veuillez saisir la valeur du coefficient a: ";
    cin >> a;
    cout << "Veuillez saisir la valeur du coefficient b: ";
    cin >> b;
    cout << "Veuillez saisir la valeur du coefficient c: ";
    cin >> c;

    delta = (b * b - (4 * a * c));
    cout << "Le discriminant delta est: " << delta << endl;
}
