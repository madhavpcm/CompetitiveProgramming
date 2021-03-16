#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <time.h>

using namespace std;
#define MOD 1000000007LL
#define LL long long
#define ULL unsigned long long
#define LD long double
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
ULL gcd(ULL a,ULL b){if(a==0)return b;if(b==0)return a;if(a==1||b==1)return 1;
if(a==b)return a;if(a>b)return gcd(b,a%b);else return gcd(a,b%a);}
#define SIZE 1000001
long long  largest_2(int x){
    long long count = 0;
    while(x%2 != 1){
        x/=2;
        count++;
    }
    return count;
}
//end refresh
string solve(int h , int w, long long n)
{
    long long sheet = 0;
    if (pow(2,largest_2(w)) *pow(2, largest_2(h)) >= n){
        return "YES";
    
    }
    else return "NO";
}//end compute
int main()
{
    #ifdef debug
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    freopen("log.txt", "w", stderr);
    #endif
    int t;
    scanf("%d",&t);
    long long n; int h , w;
    while(t--)
    {
        scanf("%d %d %lld",&w,&h,&n);
        cout<<solve(h , w , n)<<endl;

    }//end while
    #ifdef debug
    #ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    #endif
    return 0;
}//end main*