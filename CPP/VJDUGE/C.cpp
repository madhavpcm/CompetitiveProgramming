#include<bits/stdc++.h>
using namespace std;
int64_t gcd(int64_t a, int64_t b){
    if(a==0)return b;
    return gcd(b%a , a);
}
int main(){
    int64_t g=0,sum=0;
    int k;int count =0;
    cin>>k;
    for(int i=1 ; i <= k; i++ ){
        for(int ii = 1; ii <=k; ii++){
            int64_t x = gcd(i,ii);
            for(int iii= 1 ; iii<= k ; iii++){
                sum +=gcd(x,iii);
            }
        }
    }
    cout<<sum;
    return 0;
}