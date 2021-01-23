#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long n; // n = cuts
    while(cin>>n){
        if(n < 0) break;
        else
        printf("%lld\n", 1 + n * (n + 1) / 2);
    }
    return 0;
}
