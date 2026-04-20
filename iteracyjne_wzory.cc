#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean = 1.0;
	double RootMeanSquare;

    // liczymy arithmeticMean 
	for(int i = 0; i < n; i++) {
        ArithmeticMean += vector[i]; 
    }
    ArithmeticMean /= n;

    //poczatek harmonicMean
    for(int i = 0; i < n; i++) {
        HarmonicMean += 1 / vector[i];
    }
    HarmonicMean = n / HarmonicMean;

    //poczatek GeometricMean
    for(int i = 0; i < n; i++) {
        GeometricMean *= vector[i]; 
    }
    GeometricMean = pow(GeometricMean, 1.0 / n);

    //poczatek RootMeanSquare
    for(int i = 0; i < n; i++) {
        RootMeanSquare += pow(vector[i], 2);
    }
    RootMeanSquare /= n;
    RootMeanSquare = sqrt(RootMeanSquare);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean   << endl;
	cout << "Geometric Mean  = " << GeometricMean  << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;
	return 0;
}
