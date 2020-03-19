#include "pch.h"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void liczby_pierwsze(const int x) {
	vector<bool> prime(x + 1, true);

	for (int i = 2; i <= x; i++)
	{
		prime[i] = true;
	}
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (prime[i] == true)
		{
			for (int j = 2 * i; j <= x; j += i)
			{
				prime[j] = false;
			}
		}
	}
	for (int i = 2; i <= x; i++)
		if (prime[i]) std::cout << i << " ";
};

int main() {
	int x;
	cout <<"N = ";
	cin >> x;
	cout << endl;
	const int n = x;
	liczby_pierwsze(n);
	
}
