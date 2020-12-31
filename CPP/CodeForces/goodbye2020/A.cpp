#include<iostream>

#include<set>
#include<vector>
using namespace std;
int solve(vector<int> &x , int & n){

    set<int> diffs;
    int k =0;
    for(int i =0 ; i < n  ; i++){
        for(int j = i ; j < n; j++){
            diffs.insert(abs(x[j]- x[i]));
        }
    }
    return diffs.size() - 1;
}
int main(){

    int t;
    int n;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> xcoord(n);
        for(auto& i : xcoord){
            cin>>i;
        }

        cout<<solve(xcoord ,n)<<endl;
    }
}