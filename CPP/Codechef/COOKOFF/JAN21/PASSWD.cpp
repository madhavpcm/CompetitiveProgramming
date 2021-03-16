#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool test_case(){
    string s;cin>>s;
    string lower="abcdefghijklmnopqrstuvwxyz";
    string upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string num="012346789";
    string special="@#%&?";

    if (s.size() < 10 ){
        return "NO";
    }
    vector<int> res(4,0);
    for(int i =0 ; i < s.size() ; i++){
        if(i==0 || i == s.size()-1 ){
            if (lower.find(s[i]) == string::npos){
                return "NO";
            }
        }
        

    }
    
    for(auto&i : res){
        if(i==0){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    int t; 
    cin>>t;
    while(t--){
        cout<<test_case()<<endl;
    }
    return 0;
}