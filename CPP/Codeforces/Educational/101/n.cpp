#include<iostream>

int solve(){
    int a1,a2,a3,a4,a5;
    int c1,c2,c3;
    std:: cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;
    if(a1 > c1 || a2 > c2 || a3 > c3){
        return 0;
    }
    c1-=a1;
    c2-=a2;
    c3-=a3;

    if(a4 > c1){
        a4 -= c1;
        c1 = 0;
    }else{
        c1-=a4;
        a4=0;
    }
    if(a5 > c2){
        a5 -= c2;
        c2 =0;
    }else{
        c2 -= a5;
        a5 =0;
    }

    if (a4 + a5 > c3)
        return 0;
    
    return 1;
}
int main(){
    int t;std::cin>>t;
    while(t--){
        if(solve()){
            std::cout<< "YES"<<std::endl;
        }
        else {
            std::cout<<"NO"<<std::endl;
        }
    }
}