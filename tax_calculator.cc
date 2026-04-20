#include <iostream>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	if (grossprice <= 0) {
        cout << "zla cena" << endl;
	    return 0;  }
	if (taxrate <= 0 || taxrate >= 100) {
        cout << "zly tax" << endl;
	    return 0; }
    netprice = grossprice / (1 + (taxrate / 100.0));
    taxvalue  = grossprice - netprice;
    
	
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}