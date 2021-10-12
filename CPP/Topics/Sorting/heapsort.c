#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<climits.h>
int HEAP[100000],HEAPSIZE;
void swap(int*a,int*b){
    int c = *b;
    *b = *a;
    *a = c;
}
int parent(int i){
    return (i-1)/2;
}
int left(int i){
    return 2*i+1;
}
int right(int i){
    return 2*i+2;
}
void insertKey(int x){
    HEAP[HEAPSIZE++]=x;
    int i = HEAPSIZE-1;
    while(i!=0 && HEAP[parent(i)] < HEAP[i]){
        swap(&HEAP[i],&HEAP[parent(i)]);
        i=parent(i);
    }
}
void deleteIndex(int i){
    HEAP[i] =INT_MAX;
    while(i!=0 && HEAP[parent(i)] < HEAP[i]){
        swap(&HEAP[i],&HEAP[parent(i)]);
        i=parent(i);
    }
}
void maxHeapify(int i){
    int l = left(i);
    int r = right(i); 
    int largest = i;
    if( l < HEAPSIZE && HEAP[l] > HEAP[i])
        largest = l;
    if( r < HEAPSIZE && HEAP[r] > HEAP[largest])
        largest = r;
    if(largest != i ){
        swap(&HEAP[i], &HEAP[largest]);
        maxHeapify(largest);
    }
}
int extractMax(){
    if(HEAPSIZE <= 0)
        return INT_MIN;
    if(HEAPSIZE == 1){
        HEAPSIZE--;
        return HEAP[0];
    }
    int root = HEAP[0];
    HEAP[0]= HEAP[HEAP_SIZE-1];
    HEAP_SIZE--;
    maxHeapify(0);
    return root;
}
int main(){
    HEAPSIZE=0;
    int* arr;int n;
    scanf("%d ",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        HEAPSIZE++;
    } 
    return 0;

}
