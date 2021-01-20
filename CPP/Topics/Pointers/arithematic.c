#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p = (int*)malloc(5*sizeof(int));
    for(int i=0;i < 5;i++){
        p[i] = (i+1 )* 2;
    }
    scanf("%d",p);
    printf("%d", p+1);
    free(p);
    return 0;
}//unary means read from right to left
