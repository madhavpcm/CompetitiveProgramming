#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <numeric>
#include <vector>
#include <stdint.h>
#include <set>
#include <map>
#include <string>
#include <time.h>


using namespace std;
#define MOD 1000000007LL
#define ll long long
#define ull unsigned long long
#define ld long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define sl(n) scanf("%lld",&n)
#define slu(n) scanf("%llu",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define pnl printf("\n")
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)
#define DB(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define CL(a,b) memset(a,b,sizeof(a))
#define GOLD ((1+sqrt(5))/2)

const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
void swaps (char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
void swapi(int *a,int *b){int temp;temp=*a;*a=*b;*b=temp;}
ull gcd(ull a,ull b){if(a==0)return b;if(b==0)return a;if(a==1||b==1)return 1;
if(a==b)return a;if(a>b)return gcd(b,a%b);else return gcd(a,b%a);}
#define SIZE 1000001

//end refresh
std::vector<ull> sieve(ull n)
{
    std::vector<ull> AllPrimes(100000,1);
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

int main()
{
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int x;cin>>x;int temp=x;
    vector<ull> all=sieve(100000);
    vector<int> numbers;
    string s;all[1]=1;
    if(all[x]){
        cout<<x<<'='<<x;return 0;
    }
    for(int i=x; i>=1 && temp>0;i--){
        if(all[i]){
            s+=(to_string(i)+'+'); 
            temp-=i;
            i=temp;   
            i++;
        }
    }
    s[s.size()-1]='=';
    s+=to_string(x);
    cout<<s;
    #ifdef __linux__
    //cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*