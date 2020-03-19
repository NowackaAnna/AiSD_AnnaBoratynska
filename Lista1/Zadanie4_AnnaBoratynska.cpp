#include "pch.h"
#include <iostream>
using namespace std;
struct lnode
{
	int key;    // wartość  użyteczna
	lnode *next; // wskażnik na następny węzeł
	lnode(int k, lnode* n = NULL) :key(k), next(n) {}

};
int nty(int n, lnode *root)
{
	
	for (int i = 0; i < n; i++)
	{
		if (root->next == NULL)
			return 0;
		else
			root = root->next;
	}
	return root->key;
}
int suma(lnode *L)
{
	int sum = 0;
	while (L != NULL)
	{
		sum += L->key;
		L = L->next;
	}
	return sum;
}
lnode* filter(lnode* L)
{
	lnode* x = NULL;
    lnode* element  = NULL;

    while (L != NULL)
    {
        if (L->key >= 0)
        {
            if (element == NULL)
            {
                element = x = new lnode(L->key);
            }
            else
            {
                element->next = new lnode(L->key);
                element = element->next;
            }
        }

        lnode* temp = L;
        L = L->next;
        delete temp;
    }

    return x;
}

int main()
{
	lnode *L = new lnode(5);
	L = new lnode(-5,L);
	L = new lnode(2,L);
	L = new lnode(10,L);
	

	cout << "4-ty element listy:" << nty(3,L) << endl;
	cout << "Suma: " << suma(L) << endl;
	L = filter(L);
	cout << "Suma: " << suma(L) << endl;
	return 0;
}

