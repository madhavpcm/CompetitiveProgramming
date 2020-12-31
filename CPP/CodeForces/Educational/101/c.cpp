#include <algorithm>
#include<iostream>
#include <iterator>
#include<map>
#include<vector>
#include<queue>

using namespace std;


map<int , int > cust;
using pair_type = decltype(cust)::value_type;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int q ;cin>>q;int counter = 0;
        int c;
            int m;
    while(q--){
        cin>> c;
        if(c == 1){
            cin>>m;
            cust.insert({++counter , m});   
        }   
        if (c == 2){
            cout<<cust.begin()->first<<endl;
            cust.erase(cust.begin());
        }
        if (c== 3){
            auto pr = std::max_element
            (
                std::begin(cust), std::end(cust),
                [] (const pair_type & p1, const pair_type & p2) {
                    return p1.second < p2.second;
                }
            );
            cout<< pr->first<<endl;
            cust.erase(pr);
        }
    }

    return 0;
}