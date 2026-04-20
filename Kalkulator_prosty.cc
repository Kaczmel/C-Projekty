#include <iostream>

using namespace std;

int main(void) {
    int i;
    float a, b;
    float wynik;
    cout << "KALKULATOR PROSTY\n" <<"menu: " << endl << " 0 - exit \n 1 - addition \n 2 - subraction \n 3 - multiplication \n 4 - division \n Your choice?: ";
    cin >> i;
    switch(i){
        case 1: cout << "podaj liczbe pierwsza:"; cin >> a; cout << "podaj liczbe druga: "; cin >> b; wynik = a + b; cout << "twoj wynik to: " << wynik << endl; break;
        case 2: cout << "podaj liczbe pierwsza:"; cin >> a; cout << "podaj liczbe druga: "; cin >> b; wynik = a - b; cout << "twoj wynik to: " << wynik << endl; break;
        case 3: cout << "podaj liczbe pierwsza:"; cin >> a; cout << "podaj liczbe druga: "; cin >> b; wynik = a * b; cout << "twoj wynik to: " << wynik << endl; break;
        case 4: cout << "podaj liczbe pierwsza:"; cin >> a; cout << "podaj liczbe druga: "; cin >> b; 
        if(b != 0){
            wynik = a / b; cout << "twoj wynik to: " << wynik << endl; break;
        }
        else {
            cout << "nie mozna dzielic przez 0!!!" << endl; main(); break;
        }
        default: cout << "nie ma takiej opcji podaj poprawna!" << endl; main(); break;
    } 
	return 0;
}