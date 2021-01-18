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
int64_t test_case(int n,long z)
{
    int x;long c=0;
    vector<long> HS(10003,0);
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        HS[x]++;
    }
    for (int64_t i = 10002 ; i >0 ; i-- ){
        while(HS[i] && z>0){
            z -= i;
            HS[i/2]++;
            HS[i]--;
            c++;
        }
        if(z<=0)break;
    }
    if(z<=0)
        return c;
    else 
        return -1;
}
int main()
{

    int t;int n;long z;
    scanf("%d",&t);
    while(t--)
    {
        cin>>n;
        cin>>z;
        auto res = test_case(n,z);
        res==-1 ? cout<<"Evacuate"<<endl : cout<<res<<endl ;

    }//end while
    

    
    return 0;
}//end main*