#include<iostream>
long long binExp( long long b ,long long n){
    long long res =1 ;
    while(n){
        if (n%2){
            res*=b;
            n--;
        }
        else{ 
            a*=a;
            n/=2;
        }      
    }
    return res;
}
