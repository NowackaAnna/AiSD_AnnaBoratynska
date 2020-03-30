#include <iostream>

int max_a(int t[], int n)
{
    int x = t[n];
    while (n--)
    {
        if (x < t[n])
        {
            x = t[n];
        }
    }

    return x;
}

int max_a(int a, int b) { return a > b ? a : b; }

int max_b(int t[], size_t n)
{
    if (n)
    {
        return max_a(t[n], max_b(t, n - 1));
    }
    return -1;
}

int max_c(int t[], size_t begin = 0, size_t end = 0)
{
    if (begin == end)
    {
        return t[end];
    }

    int m = (begin + end) / 2;
    int left_max = max_c(t, begin, m);
    int right_max = max_c(t, m + 1, end);

    if (left_max > right_max)
    {
        return left_max;
    }

    return right_max;
}

int main()
{
    
    int tabSize = 10;
    int tab[tabSize] = {23, 31, 241, 31, 331, 55, 75, 3, 7, 3};
    
    int max_num_a = max_a(tab, tabSize);
    int max_num_b = max_b(tab, tabSize);
    int max_num_c = max_c(tab, 0, tabSize);

    std::cout << max_num_a << std::endl;
    std::cout << max_num_b << std::endl;
    std::cout << max_num_cq1	 << std::endl;

    return 0;
}
