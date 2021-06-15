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
bool check(string &a, char c)
{
    for(auto& i :a){
        if(i  < c) return true;
    }
    return false;
}
int main()
{    
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s,t,u;
    int start=0;
    cin>>s; int n=s.size();
    while(u.size()!=n){
        int start2=start;
        if(s.begin()+start==s.end()){
            break;
        }
        int end=*min_element(s.begin()+start ,s.end());
        if(end==0){
            break;
        }
        while(end!=start){
            t.push_back(*(s.begin()+start));
            start++;
        }
        if(end==start && start==0){
            t.push_back(s.front());
            start++;
        }
        for(int i=start2 ; i<=end;i++){
            t.push_back(s[i]);
        }
        while(!t.empty() && end<s.size()){
            u.push_back(t.back());
            t.pop_back();
            if(!t.empty()){
                string x(s.begin()+end+1, s.end());
                if(x.empty()){
                    break;
                }else{
                    if(check(x,t.back())){
                        continue;
                    }else{
                        u.push_back(t.back());
                    }
                }
            }else{
                break;
            }
        }

       
    }
    cout<<u;

    #ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*