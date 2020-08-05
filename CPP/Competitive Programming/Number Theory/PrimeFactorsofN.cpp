#include<iostream>
#include<limits>
#include<vector>
#define ull unsigned long long
void sieve(ull& n)
{
    std::vector<ull> AllPrimes[ULLONG_MAX]{-1};
    AllPrimes[0]=AllPrimes[1]=0;
    for(ull i =2 ; i< n ; i++){
        if(AllPrimes[i] == -1){
            for (ull j = i*i ; j < n ;j+=i){
                AllPrimes[j]=i;
            }
        }
    }
    while(n!=1){
        std::cout<<n<<" ";
        n/=AllPrimes[n];
    }

}

void main(){
    ull n;
    std::cin>>n;
    std::vector<ull> All;
    All = sieve(n);

}
