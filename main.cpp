#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c = 0;
    cin >> n;
    int tab[n];
    if (n >= 1 && n <= 20)
    {
        for (int k = 0; k < n; k++)
        {
            cin >> a >> b;
            if (a >= 10 && a <= 30 && b >= 10 && b <= 30)
            {
                for (int i = 2; i <= a*b; i++)
                {
                    if (i % a == 0 && i % b == 0)
                    {
                        tab[c] = i;
                        c++;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < c; i++)
        {
            cout << tab[i] << endl;
        }
    }
}

//https://pl.spoj.com/problems/PRZEDSZK/
