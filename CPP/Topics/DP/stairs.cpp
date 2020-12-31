#include<iostream>
#include<stdint.h>
#include<vector>
using namespace std;

#define MOD = 10e9 + 7;
vector<int32_t> dp(100001,0);

int solve(int n ){
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for( int i = 4 ; i <1000001; i++ ){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        
    }
}
int main(){
    int32_t t =0;cin>>t;
    int32_t n =0;cin>>n;

    while(t--){
        cout<<solve(n);
    }

    return 0 ;
}