#include <stdio.h>

int main()
{
    int n, reverse=0;
    printf("Enter a number to reverse\n",n);
    scanf("%d",&n);


    while(n!=0){
        reverse= reverse * 10;
        reverse= reverse+ n%10;
        n= n/10;
    }
    printf("Reverse of entered number is %d\n",reverse);

    return 0;
}

//1st loop: reverse = 0* 10=0;
//Reverse = 0 + 11/10;
//N = 11/10 = 1;
//1st loop e reverse = 1
//N=12 dia korle aro clearly bujhba
//12 dile 1st loop e reverse er value 2 hobe r 2nd loop e 1
//Mane n er value ja diba tar ulta ta ashbe total result
