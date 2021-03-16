#include<bits/stdc++.h>

using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    
    int32_t count =INT_MAX;
    for(int i =0 ; i <= s.size() - t.size() ; i++){
        string sub = s.substr(i,i+t.size());
        int32_t subcount=0;
        for(int ii =0 ; ii < t.size() ; ii++){           
            if(sub[ii]== t[ii]){
                subcount++;
            }
        }
        count=min(count, (int)t.size()-subcount);
    }

    cout<<count;
    return 0;
}