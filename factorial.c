#include <stdio.h>
int ans;
int facto(int i)
{
    ans=ans*i;
    i--;
    if(i==1) return ans;
    else facto(i);
    }

int main()
{
    int input;
    scanf("%d",&input);
    ans=1;
    printf("%d! = %d\n",input,facto(input));
    return 0;
}
