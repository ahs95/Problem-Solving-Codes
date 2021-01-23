#include <bits/stdc++.h>
using namespace std;
int main()
{
	long m,n,field=1,i,j,flag=0;
	char a[150][150],input[150];
	while(1){
		gets(input);
		sscanf(input,"%ld%ld",&m,&n);
		if(m==0 && n==0)
		    break;
		long b[150][150] = {0};
		for(i=0;i<m;i++) 
			gets(a[i]);
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					if(a[i][j]== '*'){
					    b[i-1][j-1]++;
						b[i-1][j]++;
						b[i-1][j+1]++;
						b[i][j-1]++;
						b[i][j]++;
						b[i][j+1]++;
						b[i+1][j-1]++;
						b[i+1][j]++;
						b[i+1][j+1]++;

						
					}
				}
			}
			if(flag==1)
			printf("\n");
			flag=1;
			printf("Field #%ld:\n",field++);
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					if(a[i][j]== '*')
					    printf("%c", a[i][j]);
					else
					    printf("%ld", b[i][j]);   
				}
			printf("\n");
			}
	}
	return 0;
}

