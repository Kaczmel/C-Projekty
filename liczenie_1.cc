#include <iostream>
using namespace std;

int main() {
    unsigned long i, liczba;
    int counter = 0;
    cout << "podaj liczbe" << endl;
    cin >> i;
    while(i > 0){
        if((i & 1) == 1){
            counter++;
        }
    i >>= 1;
    }
    cout << "ilosc jedynek: \n" << counter << endl;
    return 0;
}
