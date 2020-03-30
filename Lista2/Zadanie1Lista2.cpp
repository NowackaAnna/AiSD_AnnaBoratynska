#include "pch.h"
#include <iostream>
//t[] - posortowana tablica
int indeks_elementu(int t[], int n, int x) {
	int a = 0;//pierwyszy mozliwy element
	int b = n - 1;//ostatni mozliwy element
	while (a < b)
	{
		int c = (a + b)/2;
		if (x < t[c]) {
			b = c - 1;
		}
		else
		{
			a = c;
		}
	}
	if (t[a] == x) {
		return a;
	}
	else
	{
		return -1;//nie ma x w tablicy
	}
}

int main()
{
	int tab[] = { 1,2,5,6,9,34,49};
	int x = 6;
	std::cout << "Indeks szukanego elementu x = " << x <<std::endl;
    std::cout <<indeks_elementu(tab,sizeof(tab)/sizeof(tab[0]),x); 
}

