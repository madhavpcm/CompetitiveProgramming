#include<iostream>
void test_case(){
    std::string n;
    std::cin>>n;
    long long steps=0;
    for (long i=0;i<n.size();i++){
        int x=n[i]-'0';
        if(x<=5)
        {
            steps+=x;
        }
        else{
            steps+=(11-x);
        }
        
    }
    std::cout<<steps;
}
int main(){
    test_case();
}