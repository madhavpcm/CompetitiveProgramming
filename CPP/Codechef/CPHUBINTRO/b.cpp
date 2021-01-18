    #include <iostream>
    #include <cmath>
    #include <algorithm>
    #include <limits>
    #include <numeric>
    #include <vector>
    #include <stdint.h>
    #include <cstdlib>
    #include <cstdio>
    #include <cstring>
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
    ull sum=0;
    //end refresh


    int main()
    {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int t;
        scanf("%d",&t);

        int qt;int x; ull y;
        while(t--)
        {
            cin>>qt;
            if (qt == 1){
                cin>>x>>y;
                ull temp=1;ull cur;
                while(y--){
                    temp = temp*x;
                    sum= sum + (temp/10 )%10;
                }
            }
            else if (qt == 2){
                cout<<sum%2<<endl;
            }

        }//end while
        

        
        return 0;
    }//end main*