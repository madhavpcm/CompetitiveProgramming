#include<iostream>

int main(){
    int t;
    std::cin>>t;
    long long n;
    int c=0;
    while(t--){
        std::cin>>n;
        std::cout<<(n-1)/2<<std::endl;
    }
    return 0;
}