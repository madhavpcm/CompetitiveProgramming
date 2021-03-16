#include<iostream>


map<int , int> getMinMax(vector<int> arr ,int l,int h){
    map<int,int> minmax,mml,mmr;
    if (l==h){
        minmax->first=arr[l];
        minmax->second=arr[l];
    }
    if (h==l+1){
        if (arr[h]>arr[l]{
            minmax->first=arr[l];
            minmax->second=arr[h];
        }
        if (arr[l]>arr[h]){
            minmax->first=arr[h];
            minmax->second=arr[l];
        }
    }
    int mid = (l+h)/2;
    mml=getMinMax(l,mid);
    mmr=getMinMax(mid,h);

    if (mml.min < mmr.min) 
        minmax.min = mml.min; 
    else
        minmax.min = mmr.min;

    if (mml.max>mmr.max)  
        minmax.max=mml.max;
    else 
        minmax.max=mmr.max;
    
    return minmax;
}