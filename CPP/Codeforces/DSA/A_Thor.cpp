#include <bits/stdc++.h>

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

/*
Main trick of the problem is that, we maintain queues for each app

But if we need to delete latest t notifications, we delete all from the main list till t. 
This is valid because, if say certain app's notif got removed by type 2, then it will STILL be lesser than t.

That means we dont need to worry about updating chronological queue when we delete certain apps notifs because they are gonna get doomed anyway
*/
// end refresh
void test_case()
{
}
int main()
{
#ifdef __linux__
// freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// freopen("log.txt", "w", stderr);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    int time = 0;

    vector<vector<int>> apps(n+1);
    vector<int> inorder;
    unordered_set<int> unread;
    int inorder_pointer=0;

    int total = 0;

    while (q--)
    {
        int type, x;
        cin >> type >> x;
        if(type == 1) {
            apps[x].push_back(time);
            unread.insert(time);
            inorder.push_back(time);
        } 
        if(type == 2) {
            for(auto & t : apps[x]) {
                unread.erase(t);
            }
            apps[x].clear();
        }
        if(type == 3) {
            for(; inorder_pointer < x; inorder_pointer++){
                unread.erase(inorder[inorder_pointer]);
            }
        }
        std::cout << unread.size() << '\n';
        time++;
    } // end while

#ifdef __linux__
// cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif

    return 0;
} // end main*