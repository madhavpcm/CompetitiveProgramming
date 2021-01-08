#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <time.h>

using namespace std;

//end refresh



int main()
{

    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        vector<long long> v(n);
        for(auto & i : v)cin>>i;
        vector<long long> dp(n+1,0);
        for(int i = n-1 ; i >=0 ; i--){
            if (v[i] + i + 1> n ){
                dp[i+1] = v[i];
            }
            else {
                dp[i+1] =v[i] + dp[i+1+v[i]];
            }
        }
        cout<<*max_element(dp.begin(), dp.end())<<endl;
    }//end while

    return 0;
}//end main*