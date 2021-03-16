#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, j=0, c;
    long long count = 0;
    vector <int> a,b;
    cin>>n;
    long long fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    for(int i=0; i<n; i++)
    {
        cin>>c;
        a.push_back(c);
    }
    for(int i=0; i<n; i++)
    {
        cin>>c;
        b.push_back(c);
    }
    if(a==b)
    {
        cout<<count;
        return 0;
    }
    if(a[0]>b[0])
    {
    while(j==0)
    {
        count++;
        next_permutation(a.begin(), a.end());
        if(a==b )
        {
            cout<<abs(fact-count);
            j=1;
        }
    }
    }
    else if(b[0]>a[0])
    {
        while(j==0)
    {
        count++;
        next_permutation(a.begin(), a.end());
        if(a==b)
        {
            cout<<count;
            j=1;
        }
    }
    }

    return 0;
}