#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        int tmp, count = 0;
        if (y > 1)
        {
            tmp = x;
            while (tmp != y)
            {
                if (tmp % y == 0)
                {
                    tmp = tmp / y;
                }
                else
                {
                    count++;
                    break;
                }
            }
            if (count != 0)
            {
                cout << "Boring!";
            }
            else
            {
                cout << x;
                while (x > 1)
                {
                    x = x / y;
                    cout << " " << x;
                }
            }
        }
        else
            cout << "Boring!";
        cout << endl;
    }
}