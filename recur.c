#include <stdio.h>
int main()
{
    int i,a,b,fib,n;
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
        printf("% d ",fib);
    }
}
