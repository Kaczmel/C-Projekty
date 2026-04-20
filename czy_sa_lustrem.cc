#include <iostream>

using namespace std;

int main(void) {

	unsigned short int val;
	bool ispalindrome = false;
    int reversed = 0;

	cout << "value = ";
	cin >> val;
    unsigned short orginal = val;
    for(int i = 0 ;i < 16; i++){
        reversed <<= 1;          
        reversed |= (val & 1);   
        val >>= 1;
    }

   

	// Insert your code here

	if(reversed == orginal)
		cout << orginal << " is a bitwise palindrome" << endl;
	else
		cout << orginal << " is not a bitwise palindrome" << endl;	
	return 0;
}