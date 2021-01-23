#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][3],B[3][3],C[3][3];
	int i,j,k;
	printf("Enter the elements of A[3][3]:\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf("A[%d][%d] = ",i,j);
		scanf("%d",&A[i][j]);
	}
	printf("Enter the elements of B[3][3]:\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf("B[%d][%d] = ",i,j);
		scanf("%d",&B[i][j]);
	}
	printf("\n\tA[3][3]\t\t\t\tB[3][3]\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\t\t");
		for(j=0;j<3;j++){
			printf("%d\t",B[i][j]);
		}
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		C[i][j]=0;
		for(k=0;k<3;k++)
		C[i][j]=C[i][j]+A[i][k]*B[k][j]; //matrix multiplication
	}
	printf("\n\n\n\t\t A[3][3] X B[3][3]: \n");
	for(i=0;i<3;i++){
		printf("\n\t\t     ");
		for(j=0;j<3;j++){
			printf("%d\t",C[i][j]);
		}
	}
	return 0;
}
