#include<iostream>
#include<string>
int main(){
    int t;
    std::cin>>t;
    int n,a,b;
    while(t--){
        std::string out;
        std::cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            
            out+=(char)(97+i%b);
        }
        std::cout<<out<<std::endl;
    }
    return 0;
}