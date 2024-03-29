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
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    vector<string> arr(n);
    int flag =0;
    int sr=0;
    for(auto& i : arr){
        cin>>i;
        if(i.find('B')!=string::npos) 
            flag=1;
        sr+=count(i.begin(),i.end(),'B');
    }
    if(!flag){
        cout<<"-1\n";
        return;
    }
    int steps=0;
    string col;
    for (int i = 0; i < n; i++)
    {
        col.push_back(arr[i][c - 1]);
    }
    if(arr[r-1][c-1] != 'B'){
        if(arr[r-1].find('B')!=string::npos){
            cout<<"1\n";
            return;
        }
        if(col.find("B") !=string::npos){
            cout<<"1\n";
            return;
        }
        cout<<"2\n";
        return;
    }
    else{
        cout<<"0\n";
        return;
    }
}
int main()
{
    #ifdef __linux__
    #endif
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        test_case();

    }//end while
    
    #ifdef __linux__
    #endif
    
    return 0;
}//end main*