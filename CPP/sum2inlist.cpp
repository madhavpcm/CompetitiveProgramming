#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int> a={10,15,3,7};
    int k,flag=0;
    cin>>k;
    for (auto i=a.begin();i!=a.end();i++){
        int temp=k;
        temp-=*i;
        for(auto j=i+1;j!=a.end();j++){
            if (temp-*j==0){
                flag=1;
                break;
            }
        }
        if (flag==1)
            break;
    }
    if (flag==1)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}