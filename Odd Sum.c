#include <stdio.h>
#include <math.h>

int main()
{
    int t,a,b,i,x,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        for(x=a;x<=b;x++){
            if(x%2==0)
            continue;
            else
            sum+=x;
        }
    printf("Case %d: %d\n",i,sum);
    sum=0;

    }
    return 0;
}
