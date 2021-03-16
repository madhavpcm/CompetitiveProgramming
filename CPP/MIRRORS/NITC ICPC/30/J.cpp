#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <numeric>
#include <vector>
#include <limits>
#include <set>
#include <map>
#include <string>
#include <time.h>
#include <iomanip>

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
bool row_check(vector<string> & b){
    bool check=true;
    for(auto&i : b){
        if(count(i.begin(), i.end() , 'B') != count(i.begin(),i.end(),'W' ) || i.find("BBB") != string::npos || i.find("WWW") != string::npos)
            check=false;
    }
    return check;
}
bool col_check(vector<string> & b){
    bool check=true;
    for(int j=0; j< b.size() ;j++){
        string a;
        for(int i=0; i< b.size() ;i++){
            a.push_back(b[i][j]);
        }
        if(count(a.begin(), a.end() , 'B') != count(a.begin(),a.end(),'W' ) || a.find("BBB") != string::npos || a.find("WWW") != string::npos)
            check=false;
    }
    return check;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    if(n%2 !=0 ){
        cout<<0;
        return 0;
    }
    vector<string> board(n);
    for(auto& i : board){
        cin>>i;
    }
    if(row_check(board) && col_check(board)){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}//end main*