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
bool issoke(vector<int> & a){
    int n= a.size();
    vector<int> dp(n);
    vector<int> dp2(n);
    for(int i=0 ; i < n ; i++){
        if(i==0){
            dp[i]=a[i];
        }else{
            dp[i]=dp[i-1]&a[i];
        }
    }
    for(int i=n-1; i >=0 ; i--){
        if(i==n-1){
            dp2[n-1]=a[n-1];
        }else{
            dp2[i]=a[i]&dp[i+1];
        }
    }

    for(int i=0 ; i< n-1; i++){
        if(dp[i] == dp2[i+1]){
            return true;
        }
    }
    return false;
}
//end refresh
void test_case(vector<vector<int>> & E)
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto& i : a)cin>>i;
    uint32_t count=0;
    for(auto & i : E){
        if(issoke(i))
            count=(count+1)%MOD;
    }

    cout<<count%MOD<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    vector<int> all(20);
    for(int i=0 ; i< 20 ;i++)all[i]=i;
    //vector<vector<int>> E;
    do{
        E.push_back(all);
    }while(next_permutation(all.begin(), all.end()));
    while(t--)
    {
        test_case(E);

    }//end while
    
    #ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*