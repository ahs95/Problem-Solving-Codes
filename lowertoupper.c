#include <stdio.h>

int main()
{
    char lower,upper;

    printf("Enter the lowercase : ",lower);
    scanf("%c",&lower);
    if(lower >= 'a' && lower<= 'z'){
        upper=( 'A'+ lower - 'a');
    }
    else{
        upper=lower;
    }
    printf("The uppercase is : %c\n",upper);
    return 0;
}
