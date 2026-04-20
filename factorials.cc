#include <iostream>
using namespace std;


void liczenie(int ilosc) {
    unsigned long l = 1;
    int i;
    for(int i = 1 ; i <= ilosc ; i++) {
        l = l * i;
    }
    cout << ilosc << "!" << " = " << l << endl;
}

int main() {
    int h;
    cout << "Factorials\n" << "----------------" << endl;
    cout << "podaj liczbe: " << endl;
    cin >> h;
    
    if (h == 0 || h == 1) {
        cout << h << "!" << " = " << 1 << endl;
    }
    else if (h < 0) {
        cout << "Podales zla liczbe" << endl;
        main();
    } 
    else {
        liczenie(h);
    }


}