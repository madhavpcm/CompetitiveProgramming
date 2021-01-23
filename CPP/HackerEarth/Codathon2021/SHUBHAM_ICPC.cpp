#include<iostream>
#include<vector>
#include<algorithm>
#include<stdint.h>

using namespace std;
int64_t gcd(int64_t a, int64_t b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int main(){
    int n;scanf("%d",&n);int64_t inp;
    vector<long long> a(n);
    for(auto&i : a){
        cin>>i;
    }
    sort(a.begin(), a.end());
    int64_t s1=0,s2=0;
    for(int i =0 ; i < n/2 ; i++){
        s1+=a[i];
        s2+=a[n-i-1];
    }
    cout<<gcd(s1,s2);
    return 0;
}