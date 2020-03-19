#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	int n1, n2, stopien, wynik;
	double *a, *b, *c;
	string tekst;
	fstream wielomiana, wielomianb, wielomianc;
	wielomiana.open("D:/Algorytmy/wielomiana.txt");
	wielomianb.open("D:/Algorytmy/wielomianb.txt");
	wielomianc.open("D:/Algorytmy/wielomianc.txt");
	wielomiana >> n1;
	wielomianb >> n2;
	cout <<"Stopien wielomianu A(x): "<< n1 << endl;
	cout << "Stopien wielomianu B(x): " << n2 << endl;
	stopien = n1 + n2;
	wielomianc << stopien << " ";
	a = new double[n1 + 1];
	for (int i = 0; i <= n1; i++)
	{
		wielomiana >> a[i];
	}
	cout << "Wspolczynniki wielomianu A(x): " << endl;
	for (int i = 0; i <= n1; i++)
	{
		cout << a[i]<<",";
	}
	cout << "" << endl;
	b = new double[n2 + 1];
	for (int i = 0; i <= n2; i++)
	{
		wielomianb >> b[i];
	}
	cout << "Wspolczynniki wielomianu B(x): " << endl;
	for (int i = 0; i <= n2; i++)
	{
		cout << b[i]<<",";
	}
	cout << "" << endl;
	cout << "Stopien wielomainu C(x)=A(x)*B(x): " << stopien << endl;
	c = new double[n1 + n2 + 1];
	for (int i = 0; i <= n1 + n2; i++)
	{
		c[i] = 0;
	}
	//cout << "" << endl;
	for (int i = 0; i <= n1; i++)
	{
		for (int j = 0; j <= n2; j++)
		{
			c[i + j] += a[i] * b[j];
			wynik = a[i] * b[j];
			//cout << wynik << " ";
		}
	}
	//cout << "" << endl;
	cout << "Wspolczynniki wielomianu C(x)=A(x)*B(x): " << endl;
	for (int i = 0; i <= n1 + n2; i++)
	{
		cout << c[i] << " ";
		wielomianc << c[i] << " ";
	}
	
	delete[]a;
	delete[]b;
	wielomianc.close();
	wielomiana.close();
	wielomianb.close();
	return 0;
}
