#include<iostream>
#include<limits>
#include<vector>
#define ull unsigned long long
std::vector<ull> sieve(ull& n)
{
    std::vector<ull> AllPrimes[ULLONG_MAX]{1};
    AllPrimes[0]=AllPrimes[1]=0;
    for(ull i =0 ; i< n ; i++){
        if(AllPrimes[i]){
            for (ull j = i*i ; j < n ;j+=i){
                AllPrimes[j]=0;
            }
        }
    }
    return AllPrimes;
}

void main(){
    ull n;
    std::cin>>n;
    std::vector<ull> All;
    All = sieve(n);
    for (ull i =0 ; i< n ;i++){
        if (All[i]){
            cout<<All[i]<<endl;
        }
    }
}
