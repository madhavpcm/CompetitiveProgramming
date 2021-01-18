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
string solve(int count_1, int count_2 ){
    if((count_1 + count_2*2) % 2 != 0 ){
        return "NO";
    }
    else {
        int sum = (count_1 + 2*count_2 )/ 2 ;
        if (sum % 2 == 0 || sum%2 == 1 && count_1 !=0)
            return "YES";
        else
            return
                   "NO";
    }
}   



int main()
{

    int t;
    cin>>t;
    int n;int count_1, count_2;int x;
    while(t--)
    {
        count_1 = 0, count_2 = 0;
        cin>>n;
        while(n--){
            cin>>x;
            if (x == 1){
                count_1++;
            }
            else if (x == 2){
                count_2++;
            }
        }
        cout<<solve(count_1, count_2)<<endl;

    }//end while

    return 0;
}//end main*
