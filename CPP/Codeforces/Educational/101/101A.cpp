#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int subsolve(string perm){
    int open = 0;int close = 0;
    for( int i=0 ; i < perm.size() ; i++ ){
        if (perm[i] =='('){
            open++;
        }
        else close++;
    }

    if (close > open){
        return 0;
    }
    else return 1;
}
string solve(string inp){
    if (inp[0] == ')' || inp.back() == '(')
        return "NO";

    int left = 0,right = 0,x = 0;
    left = count(inp.begin(), inp.end() , '(');
    right = count(inp.begin(), inp.end() , ')');
    x =count(inp.begin(), inp.end() , '?');


    int removed = abs(left - right);
    if (x==0 && removed!=0){
        return "NO";
    }

    if (removed == 0 && x%2 ==0 ){
        return "YES";
    }else{
        return "NO";
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string inp;
        cin>>inp;
        cout<<solve(inp)<<endl;
    }
    return 0;
}