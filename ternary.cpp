#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
     int a,n,i,j;
     int ter[100];
    while(scanf("%d",&n)==1){
        if(n<0)
            break;
        for(i=0 ; ; i++){

            a=n%3;
            ter[i]=a;
            n=n/3;
            if(n==0)
                break;
        }
        for(j=i; j>=0; j--){
            printf("%d",ter[j]);
        }
        printf("\n");

    }
    return 0;
}
