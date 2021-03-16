#include<string>
#include<iostream>
#include<stdio.h>
#include<set>
using namespace std;


int main(){
    std::string s;
    
    cin>>s;
    set<char> letters(s.begin(), s.end());
    if (letters.size() > 1){
        cout<<"Lost";
    }else
    {
        cout<<"Won";
    }
    
    return 0;
}