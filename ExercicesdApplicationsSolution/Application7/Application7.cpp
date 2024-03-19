#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.14;
    char choise = '\0';
	float superficie = 0.0, rayon = 0.0, L = 0.0, l = 0.0, b = 0.0, h = 0.0;

	cout << "Veuillez saisir (C: cercle), (R: rectangle)ou (T: triangle) pour calculer la superficie: ";
	cin >> choise;

	switch (choise)
	{
	case 'C':
		cout << "Veuillez saisir la mesure du rayon du cercle: ";
		cin >> rayon;

		superficie = PI * (rayon * rayon);

		cout << "La Superficie est: " << superficie << endl;
		break;
	case 'R':
		cout << "Veuillez saisir la longueur du Rectangle: ";
		cin >> L;
		cout << "Veuillez saisir la largeur du Rectangle: ";
		cin >> l;

		superficie = L*l;

		cout << "La Superficie est: " << superficie << endl;
		break;
	case 'T':
		cout << "Veuillez saisir la mesure de la base: ";
		cin >> b;
		cout << "Veuillez saisir la mesure de la hauteur: ";
		cin >> h;

		superficie =(b * h)/2;

		cout << "La Superficie est: " << superficie << endl;
		break;
	default:
		break;
	}
}
