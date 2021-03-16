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


bool isinc(int n, vector<int> &ar) 
{ 

    if (n == 1) 
        return true; 
    else { 

        if (ar[0] < ar[1]) { 
  
            int i = 1; 

            while (i < n 
                   && ar[i - 1] < ar[i]) { 
                i++; 
            } 
  

            while (i + 1 < n 
                   && ar[i] > ar[i + 1]) { 
                i++; 
            } 

            if (i >= n - 1) 
                return true; 
            else
                return false; 
        } 

        else if (ar[0] > ar[1]) { 
            int i = 1; 
  

            while (i < n 
                   && ar[i - 1] > ar[i]) { 
                i++; 
            } 

            while (i + 1 < n 
                   && ar[i] < ar[i + 1]) { 
                i++; 
            } 

            if (i >= n - 1) 
                return true; 
            else
                return false; 
        } 

        else { 
            for (int i = 2; i < n; i++) { 
                if (ar[i - 1] <= ar[i]) 
                    return false; 
            } 
            return true; 
        } 
    } 
} 
void leftRotatebyOne(vector<int>& arr, int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}
void test_case()
{
}
int main()
{

    
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto&i : arr){
        cin>>i;
    }
    for(int i=0; i< n-2;i++){
        vector<int> temp=arr;
        vector<int> sub(temp.begin()+i,temp.begin()+i+3);
        if(isinc(3,sub)){
            
            continue;
        }
        else{
            leftRotatebyOne(sub,3);
            if(isinc(3,sub)){
                temp[i]=sub[0];
                temp[i+1]=sub[]
            }
        }
        prev=max();
    }
    

    return 0;
}//end main*