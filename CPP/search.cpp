#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    int k,s;
    long int x;
    cin>>n;
    vector<int> v;
    for (int i=0; i<n ; i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    for (int i=0; i<k ; i++){
        cin>>s;
        auto low=lower_bound(v.begin(),v.end(),s);
        if(v[low-v.begin()]==s)
            cout<<"Yes "<<(low-v.begin()+1)<<endl;
        else
            cout<<"No "<<(low-v.begin()+1)<<endl;
    }
    return 0;
}