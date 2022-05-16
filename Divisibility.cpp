#include<bits/stdc++.h>
using namespace std;
int dp[10010][105];
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int N,K;
        cin>>N>>K;
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        for(int i=1,tmp;i<=N;i++){
            cin>>tmp;
            tmp%=K;
            for(int ptr = 0 ;ptr<K;ptr++){
                if(dp[i-1][ptr]){
                    dp[i][(ptr+tmp+K)%K] = 1;
                    dp[i][(ptr-tmp+K)%K] = 1;  
                }
            }
        }
        cout<<((dp[N][0])?"Divisible":"Not divisible")<<endl;
    }
    return 0;
}Divisibility 
