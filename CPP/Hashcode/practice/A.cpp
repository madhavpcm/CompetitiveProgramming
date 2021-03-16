#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits.h>
#include <numeric>
#include <vector>
#include <stdint.h>
#include <set>
#include <unordered_map>
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
unordered_map <pair<int,int>, vector<string> > Hash;
struct pizza{
    int m_numIng;
    vector<string> m_Ing;
};
//end refresh
int main()
{

    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int m, t1,t2,t3;
    cin>>m>>t1>>t2>>t3;
    vector<pizza> all(m);
    int n; string s;
    for(int i =0 ; i< m ; i++){
        cin>>n;vector<string> ing(n);
        for(int j=0; j< n ;j++)
            cin>>ing[i];
        all[i].m_Ing=ing;
        all[i].m_numIng=n;
    }
    size_t res2 =0, res3 =0,res4 =0;
    for(int i =0; i< m; i++){
        for(int j =i+1 ; j< m ;j++){
            vector<string> v;
            auto it =set_union(all[i].m_Ing.begin() , all[i].m_Ing.end() ,
                               all[j].m_Ing.begin() , all[j].m_Ing.end() , v.begin());
            Hash.insert(pair<pair<int,int>,vector<string> >(pair<int,int>(i,j),v));
            res2=max(Hash[pair<int,int>(i,j)].size(),res2);
        }
    }
    for(int i=0 ; i<m; i++){
        for(auto&ii : Hash){
            vector <string> v;
            auto it = set_union(ii.second.begin() , ii.second.end() ,
                               all[i].m_Ing.begin() , all[i].m_Ing.end() , v.begin());
            res3=max(v.size(), res3);
        }
    }size_t max1=0, max2=0;
    for(auto&i :Hash){
        for(auto&ii :Hash){
            vector<string> v;
            auto it = set_union(i.second.begin() , i.second.end() ,
                                ii.second.begin() , ii.second.end(), v.begin() );
            res4=max(v.size(), res4);
        }
    }
    

    return 0;
}//end main*