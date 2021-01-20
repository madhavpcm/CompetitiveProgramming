#include <stdio.h>
#include<stdlib.h>

int main()
{   int *a;
    int t,N,num;
   
    
    scanf("%d\n",&t);

        for (int j=0;j<t;j++)
        {
            scanf("%d",&N);
            a=(int*)malloc(N*sizeof(int));
            if(N>=1 && N<=100000)
            {
                for (int k=0;k<N;k++)
                {
                    scanf("%d",&a[k]);
                }
            }
            
        int count=0;
        for (int i=0;i<N;i++)
        {
            int l=N;
            while(l>i)
            {
                int x=0;
                for (int m=i;m<l;m++)
                {
                    x=x^a[m];
                }
                if(x%2==0)
                {
                    count+=1;
                }
                l=l-1;
            }
        }
        printf("%d\n",count);
        free(a);
        }

    return 0;
}