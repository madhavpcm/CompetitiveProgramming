#include<iostream>
#define ull unsigned long long
using namespace std;

int main(){
    ull r,D,x2000;
    cin>>r>>D>>x2000;

    ull a[11]={0};
    a[0]= r*x2000-D;

    for(int i =1 ; i< 11; i++){
        a[i]=r*a[i-1]-D;
    }
    
    for(int i=1; i < 11; i++){
        cout<<a[i]<<endl;
    }

    return 0;
}