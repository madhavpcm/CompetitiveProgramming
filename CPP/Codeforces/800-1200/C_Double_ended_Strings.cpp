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
int test_case()
{
    string a ,b ; cin>>a>>b;
    int m =a.size(),n=b.size();

    string lcs;

    int len[2][n];
    int res=0;
    int curr=0;
    int end;
    for(int i =0; i <= m ; i++){
        for(int ii=0; ii <= n ; ii++){
            if(i==0 || ii==0)
                len[curr][ii]=0;
            else if( a[i-1] == b[ii-1]){
                len[curr][ii]=len[1-curr][ii-1]+1;
                if(len[curr][ii] > res){
                    res=len[curr][ii];
                    end=i-1;
                }
            }else{
                len[curr][ii]=0;
            }
        }
        curr=1-curr;
    }
    if(res==0){
        return m+n;
    }
    lcs=a.substr(end-res+1, res);

    int begb= b.find(lcs);
    int bega= a.find(lcs);
    return (m-bega-lcs.size()+1)+(bega-1)+(begb-1)+(n-begb-lcs.size()+1);
       
}
int main()
{

    
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cout<<test_case()<<'\n';

    }//end while
    
    #ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*