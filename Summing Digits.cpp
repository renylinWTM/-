#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (n > 0)
        {
            while (f(n) >= 10)
            {
                n = f(n);
            }
            cout << f(n) << endl;
        }
    }
}