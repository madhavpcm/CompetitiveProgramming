#include<iostream>
#include<chrono>
using namespace std;
/*          


*/


void test(int n){
    uint64_t sum=0;
    auto start= chrono::high_resolution_clock::now();
    for(int i=0; i< n ; i++){
        sum++;
    }
    auto stop =chrono::high_resolution_clock::now();
    chrono::duration<double> d =(stop -start);
    auto base=d;
    cout<<"single loop:"<<d.count()<<endl;
    sum=0;
     start= chrono::high_resolution_clock::now();
    for(int i=0; i< n ; i++){
        for(int ii=0; ii<n ;ii++)
            sum++;
    }
     stop =chrono::high_resolution_clock::now();
     d =(stop -start);
    cout<<"double loop:"<<d.count()<<"rf:"<<d.count()/base.count()<<endl;
    sum=0;
     start= chrono::high_resolution_clock::now();
    for(int i=0; i< n ; i++){
        for(int ii=0; ii<n*n ;ii++)
            sum++;
    }
     stop =chrono::high_resolution_clock::now();
     d =(stop -start);
    cout<<"triple loop:"<<d.count()<<"rf:"<<d.count()/base.count()<<endl;
    sum=0;
     start= chrono::high_resolution_clock::now();
    for(int i=0; i< n ; i++){
        for(int ii=0; ii<i; ii++)
            sum++;
    }
     stop =chrono::high_resolution_clock::now();
     d =(stop -start);
    cout<<"Bubble loop:"<<d.count()<<"rf:"<<d.count()/base.count()<<endl;
    sum=0;
     start= chrono::high_resolution_clock::now();
    for(int i=0; i< n ; i++){
        for(int ii=0; ii<i*i; ii++)
            for(int k=0; k<ii;k++)
            sum++;
    }
     stop =chrono::high_resolution_clock::now();
     d =(stop -start);
    cout<<"triple loop with extra:"<<d.count()<<"rf:"<<d.count()/base.count()<<endl;
    sum=0;
     start= chrono::high_resolution_clock::now();
    for(int i=0; i< n ; i++){
        for(int ii=0; ii<i*i; ii++)
            if(!(ii%i))
                for(int k=0; k<ii;k++)
                    sum++;
    }
     stop =chrono::high_resolution_clock::now();
     d =(stop -start);
    cout<<"some shitty loop:"<<d.count()<<"rf:"<<d.count()/base.count()<<endl;
    sum=0;

}
int main(){
    int n;cin>>n;
    test(n);
}