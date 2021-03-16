#include<iostream>

void multiply(int a[2][2]) 
{ 
    int b[2][2]={{0,1},{1,1}};//change this for other sequences
    int mul[2][2];
    for (int i = 0; i < 1; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < 2; k++) 
                mul[i][j] += a[i][k]*b[k][j]; 
        } 
    } 
 
    for (int i=0; i<1; i++) 
        for (int j=0; j<2; j++) 
            a[i][j] = mul[i][j]; 

} 
int powx(int n){
    int a[1][2] = {1,1};
    //std::cout<<a[0][1];
    if (n == 1 || n==2)
        return 1;
    //std::cout<<n;
    n=n-2;
    while(n--){
        multiply(a);
    }
    //return 0;
    return a[0][1];
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<powx(n);
    return 0;
}