#include "pch.h"
#include <iostream>
using namespace std;

double oblicz(double a[], int n, double x) {
	double w = a[0];
	double p = 1.0;
	for (int i = 1; i <= n; i++) {
		p = p * x;
		w = w + a[i] * p;
	}
	return w;
}
int main()
{
	
	double b[11] = { 1,2,3,4,6,7,8,9,10,5,11 };
	int m = (sizeof(b) / sizeof(b[0])) - 1;

	cout << oblicz(b, m, 2.0) << endl;
}
