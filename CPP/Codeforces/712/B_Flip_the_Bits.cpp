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
bool test_case()
{
    int n;cin>>n;
    string a , b;
    cin>>a>>b;
    string xc;
    if(a==b)return true;
    for(int i=0; i< a.size(); i++){
        xc.push_back((a[i]-'0')^(b[i]-'0') +'0');
    }
    vector<pair<int,int>> indices;
    for(int i=0; i<xc.size(); i++){
        if(xc[i]-'0'){
            int start=i;
            while(i < xc.size() && xc[i]-'0'){
                i++;
            }
            i--;
            int end=i+1;
            if(count(a.begin()+start,a.begin()+end,'1')==count(a.begin()+start,a.begin()+end,'0'))
                indices.push_back({start,end});//inclusive
        }
    }
    if(!indices.size())
        return false;
    for(auto &i : indices){
        if((i.second-i.first)%2 || i.first%2){
            return false;
        }
    }
    return true;
}
int main()
{

    
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        if(test_case()){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }//end while
    
    #ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*