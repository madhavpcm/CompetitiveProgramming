    #include <stdio.h>
    #include<stdlib.h>
    #include<vector>
    #include<stdint.h>
    using namespace std;
    bool check(int a){
        if (a%2 == 0) return true;
        else return false;
    }
    int main()
    {   
        int t,N;
        scanf("%d\n",&t);
        while(t--)
        {
            scanf("%d",&N);
            vector<int> a(N);
            vector<int> dp(N,0);
            uint64_t count=0,count2=0;
            for (int i =0 ; i < N ; i++){
                scanf("%d",&a[i]);

            }
            for ( int i =0 ; i < N ; i++){
                if (i == 0){
                    dp[i]=a[i];
                }else{
                    dp[i]=a[i]^dp[i-1];
                }
            }
            
            for (int i=0;i<N;i++)
            {
                for(int j =i ; j < N; j++){
                    if (i==0){
                        if(check(dp[j]))
                            count++;
                    }
                    else if (i>0){
                        if(check(dp[j]^dp[i-1]))
                            count++;
                    }

                }
            }
            for (int i=0;i<N;i++){
                int l=N;
                while(l>i){
                    int x=0;
                    for (int m=i;m<l;m++){
                        x=x^a[m];
                    }
                    if(x%2==0)
                    {
                        count2+=1;
                    }
                    l=l-1;
                }
            }    
                printf("%llu %llu\n",count,count2);
        }
        return 0;
    }