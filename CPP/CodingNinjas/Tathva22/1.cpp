#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        int mx = 0;
        for(int i=0; i<26 ; i++){
            char ch = 'a' + i;
            int i1 = s.find(ch);
            int i2 = s.rfind(ch);
            mx = max(mx, abs(i2-i1));
        }
        if(mx == 0){
            cout<<-1<<'\n';
        }
        else{
            cout<<mx-1<<'\n';
        }
    }
	// Write your code here
    return 0;
}