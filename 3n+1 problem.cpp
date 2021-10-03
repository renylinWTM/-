#include <iostream>
using namespace std;
int main()
{
    int x, y, n, temp, max = 0;
    while (cin >> x >> y)
    {
        cout << x << " " << y << " ";
        for (int i = x; i <= y; i++)
        {
            n = i;
            temp = 1;
            while (n != 1)
            {
                if (n % 2 != 0)
                {
                    n = 3 * n + 1;
                }
                else
                {
                    n = n / 2;
                }
                temp++;
            }
            if (temp > max)
            {
                max = temp;
            }
        }
        cout << max << endl;
    }
}