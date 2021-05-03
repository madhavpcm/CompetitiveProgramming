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
    int n;cin>>n;

    vector<int64_t>pos,neg;
    int64_t s=0;
    for(int i=0 ; i< n; i++){
        int64_t inp;cin>>inp;
        if(inp>=0)pos.push_back(inp);
        else neg.push_back(inp);
    }
    int64_t pos_sum=accumulate(pos.begin(),pos.end(),0);
    int64_t neg_sum=accumulate(neg.begin(), neg.end(),0);
    
            
    int64_t res=0;
    if(pos.size() && neg.size()){
        int64_t max_pos=*max_element(pos.begin(),pos.end()),
            min_pos=*min_element(pos.begin(),pos.end()),
            max_neg=*max_element(neg.begin(),neg.end()),
            min_neg=*min_element(neg.begin(),neg.end());
        s=(max_pos-min_neg)/2+min_neg;
        if(s>0){
            //neg go to 0
            int64_t x=(max_pos-min_pos)/2+min_pos;
            res+=abs(neg_sum);
            for(auto & i : pos){
                res+=abs(x-i);
            }
        }else{
            int64_t x=(max_neg-min_neg)/2+min_neg;
            res+=abs(pos_sum);
            for(auto & i : neg){
                res+=abs(x-i);
            }
    
        }
    }else if(pos.size()){
        int64_t max_pos=*max_element(pos.begin(),pos.end()),
            min_pos=*min_element(pos.begin(),pos.end());
        int64_t x=(max_pos-min_pos)/2+min_pos;
        for(auto & i : pos){
                res+=abs(x-i);
            }
    }else{
        int64_t max_neg=*max_element(neg.begin(),neg.end()),
            min_neg=*min_element(neg.begin(),neg.end());
        int64_t x=(max_neg-min_neg)/2+min_neg;
        for(auto & i : neg){
                res+=abs(x-i);
            }
    }
    

    cout<<res;


    #ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*