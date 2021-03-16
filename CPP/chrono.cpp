#include<chrono>
using namespace std::chrono;
auto start= high_resolution_clock::now();
/*          


*/
auto stop =high_resolutiion_clock::now();

auto duration =duration<microseconds>(stop -start);

cout<<duration.count()<<endl;