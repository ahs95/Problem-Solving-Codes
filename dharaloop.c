#include <stdio.h>

int main()
{
    int n,sum=0,start,dif,end;
    scanf("%d%d%d",&start,&dif,&end);
    for(n = start;n <= end ;n = dif+n){
        sum = sum+n;
    }
    printf("sum is %d\n",sum);
    return 0;
}
