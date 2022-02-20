#include<bits/stdc++.h>
using namespace std;
int main() {
    int64_t arr[8];
    for(int i=0 ;i < 8; i++)
    cin>>arr[i];
    int64_t sum =0;
    for(int i=0; i < 8 ; i++){
        int64_t res = arr[i%8] + arr[(i+1)%8]+arr[(i+2)%8]+arr[(i+3)%8];
        sum = max(sum, res);
    }
    cout<<sum<<'\n';
	// Write your code here
}