#include <iostream>
using namespace std;
int h;

void liczenie() {
    for(int i = 1 ; i <= h ;i++) {
        for(int p = 0; p < 3; p++) {

        
            for (int j = 1; j <= (2 * h - 1); j++) {
                if (i == h || j == h - i + 1 || j == h + i - 1) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main(void) {
    cout << "podaj wysokosc piramidy: " << endl; 
    cin >> h;
    cout << "---------------------------------------" << endl;
    if (h < 2) {
        cout << "podales zla wysokosc!";
        return -1;
    }
    else {
        liczenie();
    }
	return 0;
}