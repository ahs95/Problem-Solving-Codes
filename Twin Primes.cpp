#include <bits/stdc++.h>
using namespace std;
#define N 19999999
int primes[N];
int tw=1;
long long int twins[100001];
void sieve(){
	long long int i,j,k;
	primes[0]=primes[1]=1;
	k=2;
	for(i=2;i<=N;i++){
		while(i<=N && primes[i]==1)
			i++;
			if(i-k==2)
			    twins[tw++]=k;
			    
			k=i;
			for(j=2;i*j<=N;j++)
				primes[i*j]=1;
			
	}
}
    int main()
    {
    	sieve();
		int s;
    	while(scanf("%d",&s)!=EOF){
    		cout<<"("<<twins[s]<<","<<" "<<twins[s]+2<<")"<<endl;		
			}
			return 0;
	}
