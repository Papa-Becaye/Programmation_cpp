#include <iostream>
using namespace std;

int main()
{
    int perimetre = 0, surface = 0, c = 0;

    cout << "Veuillez saisir la mesure d'un cote: ";
    cin >> c;

    perimetre = c * c; 
    surface = c * 4;

    cout << "Le perimetre de ce carre est: " << perimetre << "\n" << "Sa surface est: " << surface << "\n";
}
