#include <iostream>

using namespace std;


int   sys;
float m, in;
int ft = 0;


void imperial_to_meters() {
		cout << "wpisz liczbe ft: " << endl;
		cin >> ft;
		cout << "wpisz liczbe in: " << endl;
		cin >> in;
		
		if (ft >= 0 && in >= 0) {
			m =  (ft * 12 + in) * 0.0254;
			cout << "wpisales " << ft << "'" << in << "\"" << endl << "po przeliczeniu jest to " << m << " m" << endl;
		}
		else {
			cout << "zle liczby podales";
			return;
		}
}

void meters_to_imperial() {
	cout << "Wpisz ilosc metrow:";
		cin >> m;


		in = m * 39.3700787; 
	
		if (in >= 12) {
			ft = (int)(in / 12);
			in = in - (ft * 12); 
		
			if (in < 12 && in >= 0) {
				cout << "wpisales " << m << endl << "po przeliczeniu jest to " << ft << "'" << in  << "\""<< endl;
			}  
			else if (in < 0) {
			cout << "zla liczba m " << endl;
			return;
			}
		}
}

void sprawdzanie() {
	if (sys == 0) {
		meters_to_imperial();
	}
	else if ( sys == 1 ) {
		imperial_to_meters();
	}
	else {
		cout << "Zle wpisales!" << endl;
		return;
	}
}
	
int main(void) {
	cout << "Wpisz 0 dla metrow na imperial a 1 na odwot: ";
	cin >> sys;
	sprawdzanie();
}



	
	
