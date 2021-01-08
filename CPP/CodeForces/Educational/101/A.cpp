#include<iostream>
#include <iterator>
#include <type_traits>
#include<vector>
#include<climits>
#include<math.h>
#include<valarray>
using namespace std;valarray<int>x;
int MAX = INT_MIN;
template <typename T> 
vector<T> slicing(vector<T> const& v, 
                  int X, int Y) 
{ 
  
    // Begin and End iterator 
    auto first = v.begin() + X; 
    auto last = v.begin() + Y + 1; 
  
    // Copy the element 
    vector<T> vector(first, last); 
  
    // Return the results 
    return vector; 
} 
void update_max( vector<int> &base){
    for(int i =0 ; i< base.size() ; i++){
        for(int j =i ; j<base.size() ; j++){

            vector<int> sub = slicing(base, i, j ); 

            for(auto it = begin(sub); it!=end(sub); it++ ){
                cout<<*it;
  /*              int k =min(*it, *(it+1));
                if(k!= min({k, *(it+1), *(it+2)}))
                {
                    break;
                }

                if( it==end(sub) - 2 && it - begin(sub) - 1> MAX)
                {
                    MAX = it - begin(sub);

                }

    */        }
            cout<<endl;
        }
    }
}
void solve(int & n){
    vector<int> base(n) ;

    for(int i =0 ; i < n ; i++)cin>>base[i];

    update_max(base);

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t ;
    cin>>t;

    while(t--){
        int n ; cin>>n;
        solve(n);cout<<MAX<<"\n";

    }
}