#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, s, d;
    cin >> n;
    while (n--)
    {
        cin >> s >> d;
        a = (s + d) / 2;
        b = (s - d) / 2;
        if ((s + d) % 2 == 0 && b >= 0)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }
}
