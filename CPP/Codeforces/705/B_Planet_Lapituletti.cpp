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
string mirrorize(string s,int &m, int&h){
    string mir;
    bool ans=true;
    for(int i=5 ; i>=0 ; i--){
        switch(s[i]-'0'){
            case 0:
            case 1:mir.push_back(s[i]);break;
            case 2:mir.push_back('5');break;
            case 5:mir.push_back('2');break; 
            case 8:mir.push_back('8');break;
            case 10:mir.push_back(':');break;
            default:mir.push_back(s[i]);ans=false;
        }
    }
    string p,q;
    if(h<10)
        p.push_back('0');
    string x=to_string(h);
    for(auto&k : x)
        p.push_back(k);
    if(m<10)
        q.push_back('0');
    x=to_string(m);
    for(auto&k :x)
        q.push_back(k);
    if(stoi(mir.substr(0,2)) >= stoi(p) || stoi(mir.substr(3,2)) >= stoi(q))
        ans=false;
    if(ans!= false){
        return mir;
    }else{
        return "x";
    }
}
//end refresh
void test_case()
{
    int h,m;
    cin>>h>>m;
    string start;
    cin>>start;
    string mir;
    bool ans=1;
    
    for(int i=stoi(start.substr(0,2)); i<h; i++){
        for(int j=stoi(start.substr(3,2)); j<m; j++){
            string M;
            if(i<10){
                M.push_back('0');
            }
            string I=to_string(i);
            for(auto &k : I)M.push_back(k);
            M.push_back(':');
            if(j<10){
                M.push_back('0');
            }
            string J=to_string(j);
            for(auto&k : J)M.push_back(k);
            string res=mirrorize(M,m,h);
            if(res!="x"){
                cout<<M<<endl;return;
            }
            if(j==m-1){
                j=0;
                if(i==h-1){
                    cout<<"00:00"<<endl;return;
                }else{
                    i++;
                }
            }
            
        }
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