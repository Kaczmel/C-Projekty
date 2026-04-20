#include <iostream>
using namespace std;
int n;

void liczenie(int liczba) {
    long long a = 1;
    long long b = 1;
    long long suma = 0;

    for(int i = 3; i <= liczba; i++) {
        suma = a + b;
        a = b;
        b = suma;
    }
    cout << b << endl;
}

int main() {
    cout << "Fibonacci sequence" << endl;
    cout << "Podaj ile liczb" << endl;
    cin >> n;

    if (n == 1 || n == 2) {
    cout << "1";
    }
    else if (n <= 0) {
        cout << "zla liczbe podales!" << endl;
        return -1;
    }
    else {
        liczenie(n);
    }
    return 0;
}
