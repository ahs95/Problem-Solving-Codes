#include <stdio.h>

int main()
{
    double maths[5]={98.5,92.5,97,82.5,81.5};

    int roll;

    for(roll=1;roll<=5;roll++){
        printf("Roll:%d Marks:%lf\n",roll,maths[roll-1]);
    }

    return 0;
}
