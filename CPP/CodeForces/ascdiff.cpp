#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
void test_case(){
    long n;
    cin>>n;
    vector<long>a(n);
    for(long i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    long mid=(n%2==0)?n/2-1:n/2;
    long i=0;
    while(abs(i)<n ){
        mid=mid+i;
        cout<<a[mid]<<" ";
        (i>0)?i++:i--;
        i=-i;
    }
    cout<<endl;
}
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        test_case();
    }
}
