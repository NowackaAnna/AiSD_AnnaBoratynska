#include "pch.h"
#include <iostream>
using namespace std;

//Ogólnie algorytm polega na tym, że zbiór liczb rozpatrujemy parami (jeśli jest nie parzysty ton po prostu na koniec porównujemy ostatni el.)
//Większą z liczb z pary porównujemy z akltulanym max, jeśli jest większa, to ją podstawiamy, jako max, analogicznie dla min
//Algorytm jest O(3n/2), bo dla parzystego n: wykonamy n/2 porównań dla rozdzielenia zbiorów, (n/2)-1 porownań dla znalezienia max z podzbioru potencjalnych max
//I tyle samo dla min
// więc: mamy (n/2)+2((n/2)-1)=(3*n-4)2
//Dla nieparzystego n: ((n-1)/2) na rozdzielenie, ((n-1)/2)-1 porównań dla zanlezienia min albo max w podzbiorach i 2 porównania dla spr. ostatniego elementu
//razem ((n-1)/2)+2(((n-1)/2)-1)+2=(3*n-3)/2
void max_min(int a[], int n) {
	int i = 2;
	int min;
	int max;
	if (n >= 2) //jesli są co najmnniej dwa elementy
	{
		if (a[0] > a[1]) //rozpatrujemy dwa pierwsze elementy
		{
			min = a[1];
			max = a[0];
		}
		else
		{
			min = a[0];
			max = a[1];
		}
		//rozpatruję resztę liczb
		while (i + 2 <= n)
		{
			if (a[i] > a[i + 1])
			{
				//a[i] - należy do zbioru potencjalnych maksimów
				//a[i+1] - należy do zbioru potencjalnych minimów
				if (a[i] > max)
					max = a[i];
				if (a[i + 1] < min)
					min = a[i + 1];
			}
			else
			{
				//a[i+1] - należy do zbioru potencjalnych maksimów
				//a[i] - należy do zbioru potencjalnych minimów
				if (a[i + 1] > max)
					max = a[i + 1];
				if (a[i] < min)
					min = a[i];
			}
			i += 2;
		}
		if (n % 2 == 1) //jesli liczba elementów jest nieparzysta - sprawdzamy ostatni element
		{
			if (a[i] > max) {
				max = a[i];
			}
			if (a[i] < min) {
				min = a[i];
			}
		}
	}
	else
	{
		min = max = a[0];
	}
	cout << "Rozwazany zbior liczb: " << endl;
	for (int i = 0; i <= n-1; i++) {
		cout << a[i] << ",";
	};
	cout << endl;
	cout << "Minimum tych liczb to: " << min << endl;
	cout << "Maksimum tych liczb to: " << max << endl;
}


int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	max_min(a, (sizeof(a) / sizeof(a[0]))); 
}

