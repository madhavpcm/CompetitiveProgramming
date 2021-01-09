#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <numeric>
#include <vector>
#include <stdint.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <map>
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
#define FOR(i,a,b) for(unsigned long long i=(a);i<(b);i++)
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
size_t VectorToInt(vector<int> &v)
{
size_t result = 0;
for (auto d : v)  
{
    result = result * 10 + d;
}
return result;
}

ull calc( vector<int> &v , size_t ind)
{
    for( size_t i = 0 ; i< v.size() ; i++){
        v[i]= abs(v[i] - v[ind]) % 10;
    }
    ull rz = VectorToInt(v);
    
    return rz;
}
ull test_case(size_t &n)
{
    vector<int> v(n,0);
    ull mx = 0;
    for(int i = 0 ;  i < 10 ;i++){
        std::transform(std::begin(v),std::end(v),std::begin(v),[](int x){return x+1;});

        for(size_t j = 0 ; i< n ; j++){
            ull k =calc(v,j);

            if(k > mx){
                mx= k;
            }
        }
    }
    return mx;

}
int main()
{
 
    int t;size_t n;
    scanf("%d",&t);
    while(t--)
    {
        cin>>n;   

        cout<<test_case(n)<<endl;

    }//end while

    
    return 0;
}//end main*