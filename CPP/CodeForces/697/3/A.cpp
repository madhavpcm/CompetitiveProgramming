#include<iostream>
#include<vector>
#include<stdint.h>
#include<chrono>

using namespace std; 
string test_case(){
    int64_t n;cin>>n;
    if (n%2 == 1)
        return "YES";
    
    while(n%2==0){
        n/=2;
    }
    if(n==1){
        return "NO";
    }
    return "YES";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;cin>>t;
    while(t--){
        auto start= chrono::high_resolution_clock::now();
        

        cout<<test_case()<<endl;

        auto stop =chrono::high_resolution_clock::now();

        auto duration =chrono::duration<double>(stop -start);

        //cout<<duration.count()<<endl;
        
    }
    return 0;
}