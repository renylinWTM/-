#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcast;
    cin >> testcast;
    while (testcast--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mid = n / 2;
        int sum = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            sum = sum + abs(a[i] - a[mid]);
        }
        cout << sum << endl;
    }
}
