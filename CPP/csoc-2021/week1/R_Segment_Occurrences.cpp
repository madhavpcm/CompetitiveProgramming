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
#include<string.h>

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
void makelps(string& pat, int M, vector<int>& lps){
    int len = 0;
    lps[0] = 0; 
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }else{
            if (len != 0) {
                len = lps[len - 1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }
}
size_t kmps(string& pat, string& txt)
{
    int M = pat.size();
    int N = txt.size();
    size_t res=0;
    vector<int> lps(M);

    makelps(pat, M, lps);
  
    int i = 0; 
    int j = 0;
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
  
        if (j == M) {
            res++;
            j = lps[j - 1];
        }

        else if (i < N && pat[j] != txt[i]) {

            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}



int main()
{

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,m,q;cin>>n>>m>>q;

    string s,t;
    cin>>s>>t;
    for(int i=0; i< q ;i++){
        int l,r; cin>>l>>r; 
        string c=s.substr(l-1,r-l+1);
        size_t x=0;
        size_t res=kmps(t,c);
        cout<<res<<'\n';
    }
    
    #ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*