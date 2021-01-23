#include <stdio.h>

int main()
{
	int N,i,j,n,primes;
	printf("Enter the value of N: ");
	scanf("%d",&N);
			for(i=2;i<=N;i++){
				primes = 0;
					for(j=2;j<=i/2;j++){
						if(i % j == 0){
							primes = 1;
				}
			}
			if(primes==0 && N!= 1)
            printf("%d ",i);
    }
		return 0;
}
