#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fib[39];
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < 39; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int n, num, tmp;
    cin >> n;
    while (n--)
    {
        cin >> num;
        cout << num << " = ";
        tmp = 0;
        for (int i = 38; i >= 0; i--)
        {
            if (num - fib[i] >= 0)
            {
                cout << "1";
                num = num - fib[i];
                tmp = 1;
            }
            else if (tmp == 1)
            {
                cout << "0";
            }
        }
        cout << "(fib)" << endl;
    }
}