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
void test_case()
{
}
int main()
{
   
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    vector<vector<int>> a(5,vector<int>(5));
    for(auto & i: a){
        for(auto & j : i)
            cin>>j;
    }
    int happiness=0;
    string x="01234";
    vector<string> all;
    do{
        all.push_back(x);
    }while(next_permutation(x.begin(), x.end()));
    for(auto &i : all){
        int happy=0;
        happy=a[i[0]-'0'][i[1]-'0']+a[i[1]-'0'][i[0]-'0']+
            a[i[1]-'0'][i[2]-'0']+a[i[2]-'0'][i[1]-'0']+
            a[i[2]-'0'][i[3]-'0']+a[i[3]-'0'][i[2]-'0']+
            a[i[2]-'0'][i[3]-'0']+a[i[3]-'0'][i[2]-'0']+
            a[i[3]-'0'][i[4]-'0']+a[i[4]-'0'][i[3]-'0']+
            a[i[3]-'0'][i[4]-'0']+a[i[4]-'0'][i[3]-'0'];

        happiness=max(happy,happiness);

    }
    cout<<happiness;
    #ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*