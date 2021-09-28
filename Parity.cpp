#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        string str;
        int sum = 0;
        if (n > 0)
        {
            while (n > 0)
            {
                str = to_string(n % 2) + str;
                n = n / 2;
            }
            for (int i = 0; i < str.length(); i++)
            {
                sum = sum + (str[i] - '0');
            }
            cout << "The parity of " << str << " is " << sum << " (mod 2)." << endl;
        }
    }
}