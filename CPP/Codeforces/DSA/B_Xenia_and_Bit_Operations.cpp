#include <iostream>
#include <queue>
#include <unordered_map>
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

// end refresh
class SegmentTree {
    public: 
    vector<int64_t> tree;
    SegmentTree(const int n, const int init): tree(vector<int64_t>(n,init)) {}
    int64_t query(int node, int node_low, int node_high, int q_low, int q_high){
        //if node is completely inside query
        if( q_low <= node_low  && node_high >= q_high ){
            return tree[node];
        }

        // node is outside query
        if( node_high < q_low || node_low > q_high)
            return 0;
        
        int last_in_left = (node_low + node_high) / 2;
        // * is the op
        return query(2*node, node_low, last_in_left, q_low, q_high) +
               query(2*node, last_in_left+1, node_high, q_low, q_high);
        
    }
    void update(int index, int value) {
        int n = tree.size() /2 ;
        tree[n + index] = value;
        bool flag=1;
        for(int i = (n + index)/2 ; i >= 1; i /= 2) {
            if(flag)
                tree[i] = tree[2*i] | tree[2*i+1];
            else
                tree[i] = tree[2*i] ^ tree[2*i+1];
            flag  = !flag;
        }
    }
};
int main()
{
#ifdef __linux__
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("log.txt", "w", stderr);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int exp=n-1;
    n = (1 << n);
    SegmentTree st(2 * n, 0);

    for(int i=0; i< n; i++) {
        int temp;
        cin >> temp;
        st.update(i, temp);
    }
    bool flag=1;
    int cnt=0;
    

    while(m--) {
        int i, val;
        cin >> i >> val;
        st.update(i-1, val);
        std:: cout << st.tree[1] << '\n';
    }
#ifdef __linux__
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif

    return 0;
} // end main*