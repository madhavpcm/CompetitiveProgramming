#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
void test_case(){
    long n;
    vector<long>a(n);
    scanf("%ld ",&n);
    for(long i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    sort(a.begin(),a.end());
    long mid=n/2;
    
    for(long i=1;mid>=0 && mid<n ; mid+=i){
        printf("%ld ",abs(a[mid]-a[mid+i]));
        (i>0)?i++:i--;
        i=-i;
    }
}
int main(){
    int t;
    
    scanf("%d ",&t);
    while(t--){
        test_case();
    }
}
