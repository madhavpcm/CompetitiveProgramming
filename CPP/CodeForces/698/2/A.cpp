#include<bits/stdc++.h>
using namespace std;
uint32_t test_case(){
    int n;cin>>n;
    vector<int> dp(n+1,0);int a;
    for(int i =1 ; i < n+1; i++){
        cin>>a;
        dp[a]++;
    }
    return *max_element(dp.begin(),dp.end());
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        cout<<test_case()<<endl;
    }
    return 0;

}