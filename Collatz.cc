#include <iostream>
using namespace std;

unsigned int c0; 
unsigned int i = 0;
int main(void) {
    cout << "program Collatz's idea\n podaj liczbe: " << endl;
    cin >> c0;
    cout << "--------------------------------------------------" << endl;
    for( ; ; ) {
        if (c0 == 1.0) {
            cout << c0;
            cout << "ilosc razy: " << i << endl;
            break;
        }
        else if (c0 % 2 == 0) {
            c0 = c0 / 2;
            cout << c0 << endl;
            i++;
        }
        else if (c0 % 2 == 1) {
            c0 = 3 * c0 + 1;
            cout << c0 << endl;
            i++;
        continue;
        }
    }
    return 0;
}