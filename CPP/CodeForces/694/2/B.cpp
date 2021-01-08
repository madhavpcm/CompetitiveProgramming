#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
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
unsigned long highest_power(unsigned long long a , unsigned long long q)
{
    unsigned long p = 0;
    while(a%q == 0){
        p++;
        a/=q;
    }
    return p;
}
//end refresh
unsigned long long solve(vector<unsigned long long> &a , unsigned long q) 
{
    unsigned long long sum=0;int flag =0;unsigned long long check = a.size() ;
    for(auto i = a.begin(); i != a.begin() + check;i++){
        if(*i%q != 0) break;
        cout<<*a.begin() + check<<" ";
        if (flag == 0){
            unsigned long p= highest_power(*i , q);
            if (p == 1){
                flag = 1;
            }
            while(p--){
                a.push_back(*i/q);
                check++;
            }
            
        }
        if (flag != 0){
            unsigned long p= highest_power(*i , q);
            while(p--){
                a.push_back(*i/q);
            }
        }
    }
    for(auto&i : a){sum+=i;}
    return sum;
}//end compute
int main()
{
    #ifdef debug
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    freopen("log.txt", "w", stderr);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;int n; unsigned long long q;
    scanf("%d",&t);
    while(t--)
    {
        cin>>n;
        cin>>q;

        vector<unsigned long long > a(n);
        for(auto&i : a)cin>>i;

        cout<<solve(a,q)<<endl;

    }//end while
    #ifdef debug
    #ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    #endif
    return 0;
}//end main*