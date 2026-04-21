#include <iostream>
using namespace std;


int main() {
	struct start
	{
		int godzina, minuty;
	};
	start start;
	struct koniec
	{
		int godzina, minuty;
	};
	koniec koniec;

	cout << "podaj rozpoczynajaca godzine: " << endl;
	cin >> start.godzina;
	cout << "teraz minute: " << endl;
	cin >> start.minuty;

	cout << "podaj konczaca godzine: " << endl;
	cin >> koniec.godzina;
	cout << "teraz minute: " << endl;
	cin >> koniec.minuty;

	koniec.godzina -= start.godzina;
    koniec.minuty -= start.minuty;

	while(koniec.minuty < 0) {
		koniec.minuty += 60;
		koniec.godzina--;
	}

	while(koniec.godzina < 0) {
		koniec.godzina += 24;
	}
	cout << "czas: " << koniec.godzina << ":" << koniec.minuty << endl;
	return 0;
}