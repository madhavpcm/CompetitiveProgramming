#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
int main(){
    vector<int> a = { 1, 0, 0, 1, 0, 1, 1};
    vector<int> csum(a.size(), 0);
    int mx =0;
    unordered_map<int , int> mp;
    int l,r;
    csum[0] = a[0];
    for(int i=1; i < a.size();i++){
        if(a[i])
            csum[i] = csum[i-1] + 1;
        else
            csum[i] = csum[i-1] -1;
        if(csum[i] == 0){
            mx = i+1;
            r=i;
        }
        if(mp.find(csum[i]) != mp.end()){
            if(mx <= i- mp[csum[i]]){
                mx = i - mp[csum[i]];
                r = i;
            }
        }
        else
            mp[csum[i]] = i;
    }
    unordered_map<int,int> mp2;
    /*for count of all sub arrays
    >insert csum into hashmap 
    >for each non empty element in hashmap with value > 1, do (freq)C2 and tally it
    */
    int cs=0;
    for(auto& i:a){
        cs+= (i == 0) ? -1 : 1;
        mp2[cs]++;
    }
    uint32_t sum =0;
    for(auto&i : mp2){
        cout<<i.first << "::"<<i.second<<'\n';
        if(i.second > 1)
            sum+=((i.second)*(i.second-1))/2;
    }
    if(mp2.find(0) != mp2.end())
        sum+=mp2[0];
    cout<<'\n'<<"total sub arrays :"<<sum<<'\n';
    for(auto&i : csum)
        cout<<i <<' ';
    
    cout<< r-mx+1 << " -> " << r;
    return 0;
}