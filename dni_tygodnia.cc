#include <iostream>
#include <string>
using namespace std;

int year;
int month;
int day;
int h;

enum Dzien { 
    NIEDZIELA, PONIEDZIALEK, WTOREK, SRODA, CZWARTEK, PIATEK, SOBOTA 
};

void zamiana() {
    cout << "Dzien tygodnia to: ";
    switch (h) {
        case 0: NIEDZIELA:    cout << "Niedziela"; break;
        case 1: PONIEDZIALEK: cout << "Poniedzialek"; break;
        case 2: WTOREK:       cout << "Wtorek"; break;
        case 3: SRODA:        cout << "Sroda"; break;
        case 4: CZWARTEK:     cout << "Czwartek"; break;
        case 5: PIATEK:       cout << "Piatek"; break;
        case 6: SOBOTA:       cout << "Sobota"; break;
    }
    cout << " (numer: " << h << ")" << endl;
}

void kalkulacja() {
	month = month - 2;
	if (month <= 0) {
		month += 12;
		year -= 1;
	}
	h = (month * 83) / 32;
	h += day;
	h += year;
	h += year / 4;
	h -= year / 100;
	h += year / 400;
	h = h % 7;
	
	zamiana();
}

void sprawdz() {
	if (year < 0 || month > 12 || month < 0 || day > 31 || day < 0) {
		cout << "Zła date wpisales! ";
		return;
	}
	else {
		kalkulacja();
	}
}

int main() {
	cout << "podaj rok: ";
	cin >> year;

	cout << "podaj miesiac: ";
	cin >> month;

	cout << "Podaj dzien: ";
	cin >> day;
	sprawdz();
}