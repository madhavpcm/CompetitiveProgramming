/* Primality
Math: largest divisor of any number will not exceed its square root
*/
#include<iostream>

bool isPrime(long long n){
    if (n == 1){return false;}

    for (long long i =2 ; i * i< n ; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}