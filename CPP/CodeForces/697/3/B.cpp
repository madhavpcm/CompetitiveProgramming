#include<iostream>
#include<vector>
#include<stdint.h>
#include<chrono>

using namespace std; 

 int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    
    int t;cin>>t;
    while(t--){
        auto start= chrono::high_resolution_clock::now();
        
        int n; cin>>n;
        vector<bool> res(n+1,false);bool ans=false;

        for(int i=0 ; i < n+1; i++){
            if((n- i*2020 )%2021 == 0 && i*2020 < n){
                ans=true;
                break;
            }
            if((n - i*2021)%2020 == 0 && i*2021 < n){
                ans=true;break;
            }
        }   
        if(ans){
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