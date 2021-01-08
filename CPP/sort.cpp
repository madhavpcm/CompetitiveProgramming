#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,x;
    vector<int> a;
    cin>>n;
    for (int i=0;i!=n;i++){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for (auto i=a.begin();i!=a.end();i++)
        cout<<*i<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
