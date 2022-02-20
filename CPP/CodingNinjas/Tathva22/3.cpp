#include<bits/stdc++.h>
using namespace std;
int main() {
    int64_t n;
    int64_t k;
    int q;
    cin>>n>>k>>q;

    for(int i=0; i< q ; i++){
        int64_t x,y;
        int h1=0,h2=0;
        cin>>x>>y;
        x--;
        y--;
        while(x != y){
            if(x == y || !x && !y){
                break;
            }
            if(x > 0){
                x=(x-1)/k;
                h1++;
            }
            if(x == y || !x && !y){
                break;
            }
            if(y > 0){
                y=(y-1)/k;
                h2++;
            }
            if(x == y || !x && !y){
                break;
            }
        }
        cout<<h1+h2<<'\n';
    }
	// Write your code here
    return 0;
}