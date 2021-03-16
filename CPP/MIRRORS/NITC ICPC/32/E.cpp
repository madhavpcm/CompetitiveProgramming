#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s;
    int k;
    cin>>n>>k>>s;
    cout<<(char)(s[k-1]+32);
    return 0;
}