#include <iostream>
#include <vector>

int iloczyn_skalarny(const std::vector<int> &v1, const std::vector<int> &v2)
{
    int wynik = 0;

    for (size_t i = 0; i < v1.size(); ++i)
    {
        result += v1[i] * v2[i];
    }
    
    return wynik;
}
//b) O(n) Metoda Hornera Lista1 Zad3 
//c) O(n^2) Lista1 Zad7
//d) O(n^3)
//e) O(n!)

int main()
{
    const std::vector<int> v1 = {1, 2, 3};
    const std::vector<int> v2 = {4, 5, 6};
    std::cout << iloczyn_skalarny(v1, v2) << std::endl;

    return 0;
}
