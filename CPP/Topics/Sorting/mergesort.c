#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int* mergeTwo(int a[], int b[], int m ,int n){
    int* c = (int*)malloc((n+m)*sizeof(int));
    int i=0,j=0,k=0;
    while(i <m && j<n){
        if(a[i] > b[j])
            c[k++]=b[j++];
        else
            c[k++]=a[i++];
    }
    while(i<m)
        c[k++] = a[i++];
    while(j<n)
        c[k++] = b[j++];
    return c;
}
int main(){
    int a[10],b[10];
    int n =10;
    for(int i=0 ; i< n ; i++)
        scanf("%d",&a[i]);
    for(int i=0 ; i< n ; i++)
        scanf("%d",&b[i]);
    int *c = mergeTwo(a,b,10,10) ;
     
    return 0;
}
