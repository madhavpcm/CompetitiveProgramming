#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
template <typename T> 
vector<T> slicing(vector<T> const& v, 
                  int X, int Y) 
{ 
    auto first = v.begin() + X; 
    auto last = v.begin() + Y + 1; 
  
    vector<T> vector(first, last); 
  
    return vector; 
} 
int main(){
    int n;int x;
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>n;int res=INT_MIN;
    vector<int> cSum(n,0);

    for(auto&i : cSum){
        cin>>i;
    }
    for(int i =0 ; i < n ;i ++){
        for(int ii = i ; ii < n ; ii++){
            vector<int> sub = slicing(cSum , i , ii);
            int x =*min_element(sub.begin() , sub.end())*sub.size();
            res=max(x,res);
        }//brute force
        
    }
    cout<<res;
    return 0;
}