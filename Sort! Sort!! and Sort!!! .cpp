#include <bits/stdc++.h>
using namespace std;
int n, m;
bool cmp(int x, int y)
{
    int xOdd = abs(x % 2), yOdd = abs(y % 2); //abs=絕對值
    if (x % m != y % m)
        return x % m < y % m;
    else if (xOdd != yOdd)
        return xOdd > yOdd;
    else if (xOdd)
        return x > y;
    else
        return x < y;
}
int main()
{
    int a[10001];
    while (cin >> n >> m)
    {
        cout << n << " " << m << endl;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
            cout << a[i] << endl;
    }
}
