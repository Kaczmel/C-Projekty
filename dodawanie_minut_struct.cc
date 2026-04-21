#include <iostream>
using namespace std;

int main() {
	struct data
	{
		int godzina, minuty1, minuty2;
	};
	struct data czas;
	cout << "podaj godzine: " << endl;
	cin >> czas.godzina;
	cout << "podaj minute: : " << endl;
	cin >> czas.minuty1;
	cout << "podaj ile dodac minut: " << endl;
	cin >> czas.minuty2;

	czas.minuty1 += czas.minuty2;
	while(czas.minuty1 >= 60) {
		czas.minuty1 -= 60;
		czas.godzina++;
	}
	while(czas.godzina >= 24) {
		czas.godzina -= 24;
	}
	cout << "obliczony czas to: " << czas.godzina << ":" << czas.minuty1 << endl;
	return 0;
}