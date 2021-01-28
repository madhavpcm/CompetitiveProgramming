#include<bits/stdc++.h>
using namespace std;
vector<vector<bool>> dp(10);
void process(){
    for(int i=1; i< 10; i++){
        vector<bool> x(100000001,false);
        x[i]=true;
        for(int j=i; j<100000001; j++){
            if(to_string(j).find(to_string(i)) != string::npos || j%i==0){
                x[j]=true;
            }
        }
        dp[i]=x;   
    }
}
void test_case(){
    int q;int d;cin>>q>>d;
    int a;
    while(q--){
        cin>>a;
        if(d==1){
            cout<<"YES"<<endl;
        }
        else{
            bool flag=true;
            for(int i =0; i<dp[d].size();i++ ){
                if(dp[d][a-i] && a-i>-1){
                    cout<<"YES"<<endl;break;flag=false;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    process();
    int t;cin>>t;
    while(t--){
        test_case();
    }
    
    return 0;
}