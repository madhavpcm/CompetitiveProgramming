#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
#define MOD 1000000007
#define ull long long

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(NULL);
    vector<ull> dp(3,0);
    int t;
    ull n;
    
    dp[1] = 1;
    dp[2] = 2;
    for (ull i = 3 ; i < 1000 ; i++){
        dp.push_back(dp[i-1] + dp[i-2] % MOD);
    }
    scanf("%d ",&t);
    while(t--){
        scanf("%lld ",&n);
        printf("%lld",dp[n]);
    }
    return 0;
}
