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
#include <limits.h>

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
uint32_t selsort(string& s){
    if(!s.size())
        return 0;
    for(auto & i : s){
        if(i=='.'){
            i='1';
        }else{
            i='0';
        }
    }
    int pos;
    uint32_t res=0;
    for(int i=0; i< s.size()-1; i++){
        pos=i;
        for(int j=i+1; j< s.size(); j++){
            if(s[j] < s[pos])
                pos=j;
        }
        if(pos!=i){
            swap(s[i], s[pos]);res+=(pos-i+1);
        }
    }
    return res;
}
//end refresh
void test_case()
{
    int n; cin>>n; 
    string s; cin>>s;
    
    int beg=s.find('.');int end=s.rfind('.');
    int steps=INT_MAX; int pos=-1;
    for(int i=0; i< n; i++){

        if(s[i]== '.'){
            string left(s.begin(), s.begin()+i);
            string right(s.begin()+i+1, s.end());
            uint32_t st=selsort(left)+selsort(right) ;
            if(st< steps){
                steps=st;
                pos=i;
            }
        }
        //cout<<sub<<' ';

    }
    if(pos<0){
        cout<<0<<'\n';
    }else{
        cout<<steps%INT_MAX<<'\n';
    }
}
int main()
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        test_case();

    }//end while
    
    #ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*