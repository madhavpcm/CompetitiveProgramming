#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

size_t solve(vector<int> &x , int & n){
    int c=0;
    set<int> uniq;
    for(int i =0 ; i< x.size(); i++){
        if (uniq.find(x[i])==uniq.end()){
            uniq.insert(x[i]);
        }
        else{
            uniq.insert(x[i]+1);
        }
    }   
    return uniq.size();
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
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