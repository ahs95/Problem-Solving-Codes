#include <stdio.h>

int main()
{
int year_b, year_c, month_c, month_b, day_c, day_b, age, i,t;
scanf("%d",&t);

for(i=1; i<=t; i++)
{
scanf("%d/%d/%d",&day_c, &month_c, &year_c);
scanf("%d/%d/%d",&day_b, &month_b, &year_b);
age=(year_c-year_b);
if(month_c<month_b)
age--;
else if(month_c==month_b)
{
if(day_c<day_b)
age--;
}
if(age<0)
printf("Case #%d: Invalid birth date\n",i);
else if(age>130)
printf("Case #%d: Check birth date\n",i);
else
printf("Case #%d: %d\n",i,age);
}

return 0;
}
