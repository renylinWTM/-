//uva10162
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// N = 100 為 1 循環，因此先求出 N = 0 ~ 99 的答案，再根據 N % 100 即可求出答案

int main() {
    string N;
    int ans[100], a, b, len, n;

    // 先求出 N = 0 ~ 99 的答案
    ans[0] = 0;
    for(int i = 1; i < 100; i++) {
        a = i % 10; // a = N % 10
        b = i % 10; // b = (N ^ j) % 10

        // 讓 b = (N ^ N) % 10
        for(int j = 2; j <= i; j++)
            b = (b * a) % 10;

        // ans[i] = (ans[i - 1] + (N ^ N)) % 10
        ans[i] = (b + ans[i - 1]) % 10;
    }

    while(cin >> N) {
		if(N == "0")
            break;

        // 取得 N % 100 的結果
        len = N.length();
        if(len > 1)
            n = (N[len - 2] - '0') * 10 + (N[len - 1] - '0');
        else
            n = N[0] - '0';

        // 輸出最後答案
        cout << ans[n] << endl;
    }

    return 0;
}
