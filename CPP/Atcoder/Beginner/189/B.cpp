#include<string>
#include<iostream>
#include<stdio.h>
#include<set>
#include<vector>
using namespace std;


int main(){
    int n ;double s=0,x;int res=0;bool flag=true;

    cin>>n>>x;
    int v,p;
    for(int i =0 ; i < n ; i++){
        cin>>v>>p;
        s+=v*p/100;
        if(s>x && flag){
            res=i+1;
            flag=false;
        }
    }
    if(res==0)
        cout<<-1;
    else
        cout<<res;
    return 0;
}