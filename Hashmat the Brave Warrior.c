#include <stdio.h>

int main()
{
    long long int x,y;
    while(scanf("%lld %lld",&x,&y)==2){
        long long z=y-x;
        if(z<0) z= z*-1;
        printf("%lld\n",z);
    }
    return 0;
}
