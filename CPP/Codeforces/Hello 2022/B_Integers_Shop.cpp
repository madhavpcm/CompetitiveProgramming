#include <iostream>
#include <climits>
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
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define si(n) scanf("%d", &n)
#define sf(n) scanf("%f", &n)
#define sl(n) scanf("%lld", &n)
#define slu(n) scanf("%llu", &n)
#define sd(n) scanf("%lf", &n)
#define ss(n) scanf("%s", n)
#define pnl printf("\n")
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define DB(x) cout << "\n" \
                   << #x << " = " << (x) << "\n";
#define CL(a, b) memset(a, b, sizeof(a))
#define GOLD ((1 + sqrt(5)) / 2)

const double PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
void swaps(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swapi(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
ull gcd(ull a, ull b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == 1 || b == 1)
        return 1;
    if (a == b)
        return a;
    if (a > b)
        return gcd(b, a % b);
    else
        return gcd(a, b % a);
}
#define SIZE 1000001
struct Data
{
    int l, r;
    int diff;
};
// end refresh
void test_case()
{
    int n;
    cin >> n;
    int64_t mnL = INT_MAX;
    int64_t cL= INT_MAX;
    int64_t mxR = 0;
    int64_t cR = INT_MAX;
    int64_t mxLen = INT_MIN;
    int64_t cLen = INT_MAX;

    for(int i=0; i < n ; i++){
        int64_t l,r,c;
        cin>>l>>r>>c;

        if(l < mnL){
            mnL = l;
            cL = INT_MAX;
        }
        if(mnL == l){
            cL = min(cL,c);
        }
        if(r > mxR){
            mxR = r;
            cR = INT_MAX;
        }
        if(mxR == r){
            cR = min(cR,c);
        }
        if(mxLen < r-l+1){
            mxLen = r-l+1;
            cLen = INT_MAX;
        }
        if(mxLen == r-l+1){
            cLen = min(cLen, c);
        }
        int64_t res = cL + cR;
        if(mxLen == mxR - mnL +1){
            res = min(res, cLen);
        }
        cout<<res<<'\n';
    }


    int ans = 0;
}
int main()
{
#ifdef __linux__
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        test_case();

    } // end while

#ifdef __linux__
#endif

    return 0;
} // end main*