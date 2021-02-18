#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;
int subsolve(vector<int> &A){
    long mx = 0;
    long sum =0;

    for( int i =0 ; i< A.size(); i++ ){
        sum += A[i];
        mx = max(mx , sum);
        cout<<A[i]<<" ";
    }

    return mx;
}
int solve(vector<int> &R , vector<int> &B){
    vector<int> A(R.size(), B.size());
    int c1 =1 ,c2 =-1;

    int k =0;
    while(k < A.size()){
        if ( c1 == 1){
            c1 = -1;
            auto val= max_element(R.begin(),R.end());
            A[k++] = *val;cout<<*val;;
            R.erase(val);if(R.size() == 0)c1=0;
        }else if ( c1 == -1){
            c1 = 1;
            auto val= min_element(R.begin(),R.end());
            A[k++] = *val;cout<<*val;;
            R.erase(val);if(R.size() == 0)c1=0;
        }
        if ( c2 == 1){
            c2 = -1;
            auto val= max_element(B.begin(),B.end());
            A[k++] = *val;cout<<*val;;
            B.erase(val);if(B.size() == 0)c2=0;
        }else if ( c2 == -1){
            c2 = 1;
            auto val= min_element(B.begin(),B.end());
            A[k++] = *val;cout<<*val;;
            B.erase(val);if(B.size() == 0)c2=0;
        }

    } 
    return subsolve(A);
}
int main(){
    int t;cin>>t;
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    while(t--){
        int n;int m;
        cin>>n;
        vector<int> R(n);
        for( auto &i : R)cin>>i;
        cin>>m;
        vector<int> B(m);
        for(auto& j : B)cin>>j;


        cout<<solve(R,B)<<endl;
    }
    return 0;
}