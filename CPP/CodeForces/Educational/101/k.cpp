#include <bits/c++config.h>
#include <iostream>
#include <vector>
#include<string>
using namespace std;
void erasesub(string & master , string  sub){
    size_t pos = string::npos;

    while ((pos = master.find(sub) )!= string::npos){
        master.erase(pos, sub.length());
    }
}
int erasecountsub(string & master , string  sub){
    size_t pos = string::npos;
    int counter = 0;
    while ((pos = master.find(sub) )!= string::npos){
        master.erase(pos, sub.length());counter++;
    }
    return counter;
}
string solve(string input){
    erasesub(input, "DU");
    erasesub(input, "UD");
    erasesub(input, "RL");
    erasesub(input, "LR");

    int x =0, y=0;

    x-=erasecountsub(input, "");

    return n;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string input;
        cin>>input;

        cout<<solve(input);
    }
}