#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    int t;std::cin>>t;
    while(t--){
        std::vector<int> arr(4);
        for(auto &i : arr)
            std::cin>>i;
        sort(begin(arr), end(arr));
        std::cout<<arr[0]*arr[2]<<std::endl;
    }
}