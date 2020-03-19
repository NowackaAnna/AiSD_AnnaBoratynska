#include "pch.h"
#include <iostream>
using namespace std;

double potegowanierek(double x,int n) {
	double temp = 1.0;
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}

	else if (n%2 == 1) {
		x = x * potegowanierek(x, n - 1);
		return x;
	}
	else
	{
		temp = potegowanierek(x, n / 2);
		return temp * temp;
	}
	
}

double potegowanie(double x, int n) {
	double wynik = 1.0;
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else {
		while (n > 0)
		{
			if (n % 2 == 1) {
				wynik = x * wynik;
			}
			x = x * x;
			n = n >> 1;//przesuwam n w reprezentacji bitowej o 1,aby pozbyć się ostatniego bitu
		};
		return wynik;
	}
}
int main()
{
    cout << potegowanierek(2.3,4)<<endl;
	cout << potegowanie(2.3, 4) << endl;
	return 0;
}

