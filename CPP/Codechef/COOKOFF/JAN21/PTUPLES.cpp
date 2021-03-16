#include<iostream>
#include<vector>
#include<stdint.h>
#include<map>
#define ull unsigned long long
using namespace std;
map<int,int> x;
std::vector<bool> sieve()
{
    std::vector<bool> all(1000001,1);
    all[0]=all[1]=0;
    for(ull i =0 ; i<  1000001; i++){
        if(all[i]){
            for (ull j = i*i ; j < 1000001 ;j+=i){
                all[j]=0;
            }
        }
    }
    return all;
}


int main(){
    int t;
    cin>>t;
    vector<bool> all=sieve();
    vector<uint32_t> dp(1000001,0);
    for(int i=2 ; i < 1000001  ; i++){
        dp[i]+=dp[i-1];
        if(all[i] && all[i-2]){
            dp[i]++;
        }
    }
    while(t--){
        int n;cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}