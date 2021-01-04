#include<iostream>
#include<stdint.h>
#include<vector>
#include<chrono>

using namespace std;

long long MOD= 10e9 + 7;
vector<long long> dp(1000001,0);

int solve(int32_t n ){
    return dp[n];
}
long long recursive_solve( const int n){
    if (n<=0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;//base cases-
    
    if (dp[n] != 0) { return dp[n]; }//checking if already solved
    
    dp[n] = recursive_solve( n-1) + recursive_solve( n-2) + recursive_solve(n-3);

    return dp[n];
}
int main(){
    auto start = chrono::high_resolution_clock::now();
    int32_t t =0;cin>>t;
    int32_t n =0;
    
   /* dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for( int i = 4 ; i <1000001; i++ ){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
    }*/

    while(t--){
        cin>>n;    
        cout<<recursive_solve(n)<<endl;
    }
    auto end = chrono::high_resolution_clock::now();
    auto dur = chrono::duration<float , milli>(end-start);
    cout<<dur.count()<<endl;
    return 0 ;
}