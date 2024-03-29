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

/*
Stack

Trick is that we push to string t( t is a stack). 
If the current element pushed has no element less than it in the string, the push it to u

*/
int main()
{
    #ifdef __linux__
    // freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    // freopen("log.txt", "w", stderr);
    #endif
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string inp;
    string t;
    string u;
    vector<int> count(26,0);
    cin >> inp;
    int i=0;
    for(auto& ch : inp)
        count[ch-'a']++;

    while(i < inp.size()) {
        t.push_back(inp[i]);
        count[inp[i] -'a']--;

        while(t.size()> 0) {
            bool flag=0;
            for(int j=0; j < t.back() - 'a'; j++) {
                if(count[j] > 0){
                    flag=1; break;
                }
            }
            if(flag)
                break;
            u.push_back(t.back());
            t.pop_back();
        }
        i++;
    }

    std::cout << u<< '\n';
    
    #ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*