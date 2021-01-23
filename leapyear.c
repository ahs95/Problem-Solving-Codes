#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x%4 == 0){
        printf("leap year\n");
    }
    else{
        printf("not leap year\n");
    }
    return 0;
}
