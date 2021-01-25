#include<iostream>
#include<vector>
#include<set>
using namespace std;
void test_case(){
    set<int> dis;
    int l,r;cin>>l>>r;
    

    cout<<2*r-2*l+1<<endl;
}
int main(){
    int t; 
    cin>>t;
    while(t--){
        test_case();
    }
    return 0;
}