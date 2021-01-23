#include <stdio.h>

int main()
{
    int numbers[10][10][100];

    int school, clss, roll;
    printf("Number of schools: ");
    scanf("%d", &school);
    printf("Number of classes in each school: ");
    scanf("%d", &clss);
    printf("Number of students in each class: ");
    scanf("%d", &roll);
    int i, j,k;
    for (i=0; i<school; i++) {
        for (j=0; j<clss ; j++) {
            for (k=0; k<roll; k++) {
                printf("Marks obtained by Roll #%d Class #%d School #%d: ", k+1, j+1, i+1);
                scanf("%d", &numbers[i][j][k]);
            }
        }
    }

    return 0;
}
