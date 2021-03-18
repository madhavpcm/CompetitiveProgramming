#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
void solve(int& n ){
 
    string a,b;
    cin>>a;
    cin>>b;
 
    int R =0, B = 0;
    for(int i =0 ; i< n; i++){
        if(a[i] > b[i])
            R++;
        if(a[i] < b[i])
            B++;
    }
    if (R == B){
        cout<< "EQUAL"<<endl;
    }else if (R > B){
        cout<<"RED"<<endl;
    }else{
        cout<<"BLUE"<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    int t , n;
    
    cin>> t;
    while(t--){
        cin>>n;
        solve(n);
    }
    return 0;
}