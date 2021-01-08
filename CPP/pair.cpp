#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int max1=0,max2=0;  

    cin >> n;
    vector<long int> numbers(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    if (n==1){
        cout<<numbers[0]*numbers[0]<<"\n";
        return 0;
    }
    max1=0;
    for (int i=0; i< n;++i){
        if (numbers[i]>=numbers[max1]){
            max1=i;
        }
    }
    
    max2=0;
    for (int i=0; i< n;++i){
        if (numbers[i]>max2 && numbers[i]!=numbers[max1]){
            max2=i;
        }
    }
    long long p=numbers[max1]*numbers[max2];
    cout<<p<<"\n";
    return 0;
}
