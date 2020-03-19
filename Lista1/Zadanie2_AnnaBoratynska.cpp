#include "pch.h"
#include <iostream>
using namespace std;

double bisekcja(double funkcja(double)) {
	double a = 0.0;
	double b = 1.0;
	double przedzial = b - a;
	double roznica = przedzial;
	double c = (a+b)/2;
	if (funkcja(a) < 0 and funkcja(b) > 0) {
		while ((funkcja(c) != 0) and (roznica != 0)) {
			if (funkcja(c) < 0) {
				a = c;
			}
			else{
				b = c;
			}
		
			roznica = przedzial - (b - a);//To sprawdza, czy konce się do siebie zbliżają
			przedzial = b - a;
			c = (a + b) / 2;
			
		}
		return c;
	}
	else {
		cout << "Funkcja nie spelnia zalozen" << endl;
	}
	//return c;
}
double f(double x) {
	x = (x*x*x)-0.5;
	return x;
}
int main()
{
    cout << bisekcja(f)<<endl;
	return 0;
}

