#include<iostream>
#include<vector>
#include<stdint.h>
#include<chrono>
#include<set>
using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    vector<bool> res(1005000, false);
    res[2020]=res[2021]=true;
    for(int i=2020 ; i< 1000001; i++){
        if(res[i]==true){
            if(i+2020< 1000001)
                res[i+2020]=true;
            if(i+2021< 1000001)
                res[i+2021]=true;
        }
        
    }
    int t;cin>>t;
    while(t--){
        auto start= chrono::high_resolution_clock::now();
        
        int n; cin>>n;
       
        if(res[n]){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

        auto stop =chrono::high_resolution_clock::now();

        auto duration =chrono::duration<double>(stop -start);

        //cout<<duration.count()<<endl;
        
    }
    return 0;
}