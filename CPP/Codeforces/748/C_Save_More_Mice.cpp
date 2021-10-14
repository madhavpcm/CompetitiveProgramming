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
#include <stack>
#include <list>
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
 template<typename T>
class AddForward {
public:
    const T value;

    AddForward( T& value) : value { value } {}
    AddForward(T&& value) : value{value} { std::move(value); }

    void operator()(stack<T>& v) const {
        v.add_forward(value);
    }
};
  
  template<typename Vector, typename Function>
static void for_all( std::list<Vector> list, Function f) {
    for (Vector& vector : list) { // the error seems to occure here
        f(vector);
    }
}
//end refresh
void test_case()
{
    int64_t n,k;
    cin>>n>>k;
    vector<int64_t> mice(k);
    for(auto &i : mice){
        cin>>i;
        i = n - i;
    }
    sort(mice.begin(),mice.end());
    int64_t passed =0 ;
    for(int i=0; i< k; i++){
        passed+=mice[i] ;
        if( passed >= n){
            cout<<i<<'\n';
            return;
        }
    }
    cout<<k<<'\n';
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
    stack<int> vector({5, 4, 3});
    stack<int> vector2({3, 2, 4});
    for_all(std::list<stack<int>>({vector, vector2}), AddForward<int>{10});
#ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    return 0;
}//end main*