#include <iostream>

using namespace std;

int main(void) {
    int l;
	int nominaly[5] = {50, 20, 10, 5, 1};
	
    cout << "podaj kwote: ";
    cin >> l;
    for(int i = 0; i < 5; i++) {
        while(l >= nominaly[i]) {
            cout << nominaly[i] << "  ";
            l -= nominaly[i];
        }
    }
    cout << endl;
    return 0;
}