#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <numeric>
#include <vector>
#include <stdint.h>
#include <cstdlib>
#include <cstdio>
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
vector<ull> fct(20,0);
unsigned long long factorial(unsigned long long n) 
{
    if (n == 0)
       return 1;
    if (fct[n] != 0){
        return fct[n];
    }
    else{
        fct[n] =n * factorial(n - 1);
        return fct[n];
    }
}
//end refresh
ull test_case(string str)
{
    if (str.size( ) >=6){
        return (factorial(str.size()) - 2*factorial(str.size()-2)) - factorial(str.size() -4);
    }
    else if (str.find("k") != string::npos && str.find("a") != string::npos && str.find("r") != string::npos){
        return (factorial(str.size()) - factorial(str.size()-2));
    }
    else if (str.find("s") != string::npos && str.find("h") != string::npos && str.find("i") != string::npos){
        return (factorial(str.size()) - factorial(str.size()-2));
    }
    else {
        return factorial(str.size());
    }
}
int main()
{   
  
    int t;
    scanf("%d",&t);string str;
    while(t--)
    {
        cin>>str;
        cout<<test_case(str)<<endl;

    }//end while
    

    return 0;
}//end main*