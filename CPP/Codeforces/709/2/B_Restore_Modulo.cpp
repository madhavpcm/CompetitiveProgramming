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
    int n;int arr_max=-1;cin>>n;
    vector<int> a(n);
    for(auto &i : a){cin>>i;arr_max=max(arr_max,i);}
    bool flag=true;
    int pos_diff=abs(a[0] - a[1]),neg_diff=-pos_diff;
    int m =-1, c=-1;
    for(int i =1 ; i< n && flag; i++){
        flag=(a[i]==a[i-1]);
    } 
    if(flag){
        cout<<0<<endl;return;
    }
    flag=true;
    for(int i=1 ; i< n&& flag; i++){
        if(a[i]>= a[i-1]){
            if(c==-1){
                c=a[i]-a[i-1];
            }else if (c!=a[i]-a[i-1]){
                flag=false;   
            }
        }
        else{
            if(m==-1 )
                m=a[i-1]-a[i];
            else if(m != a[i-1]-a[i])
                flag=false;

        }
    }
    if(!flag|| c!=-1 && m!=-1 &&c+m<=arr_max){
        cout<<-1<<endl;
    }else if(c==-1 || m==-1){
        cout<<0<<endl;
    }else{
        cout<<m+c<<" "<<c<<endl;
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