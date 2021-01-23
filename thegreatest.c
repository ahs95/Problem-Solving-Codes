#include <stdio.h>

int main()
{
    int a,b,s,MaiorAB,maior;
    scanf("%d %d %d",&a,&b,&s);
    MaiorAB=(a+b+abs(a-b))/2;
    maior=(MaiorAB+s+abs(MaiorAB-s))/2;
    printf("%d eh o maior\n",maior);
    return 0;
}
