#include<bits/stdc++.h>
using namespace std;
string pro(string s, int zc,int c){
    string res(zc*c,'#');
    //cout<<s<<" ";
    int temp=zc,j=0;
    for (int i=0;i<c;i++)
        for (j=zc*i;j<zc*i+zc;j++)
            res[j]=s[i];
    cout<<res<<endl;
	return res; 
}
int main() {

	// Write your code here
    int r,c,zr,zc;
    string ws;
    cin>>r>>c>>zr>>zc;
    ws=cin.get();
    vector<string> s(r);
    
    for(int i=0;i<s.size();i++){
        //cout<<i<<endl;
        string temp;
        getline(cin,temp);
        s[i]=temp;
    }
    //cout<<r;
    for (int i=0;i<r;i++){
        //cout<<i;
        string k=pro(s[i],zc,c);
        //for(int j=0;j<zr;j++)
            //cout<<k<<endl;
    }
}		