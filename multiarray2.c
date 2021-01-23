#include <stdio.h>

int main()
{
    int numbers[5][7] = { {81, 87, 93, 97, 92, 87, 82},
                        {83, 88, 94, 96, 91, 86, 81},
                        {84, 89, 95, 95, 90, 85, 80},
                        {85, 90, 96, 94, 89, 84, 81},
                        {86, 91, 97, 93, 88, 83, 82} };
    int i, j, sum;
    for (i=0; i<5; i++) {
        sum = 0;
        for (j=0; j<7; j++) {
            sum = sum+numbers[i][j];
        }
        printf("Summation of row %d is %d\n", i+1, sum);
    }
    return 0;
}
