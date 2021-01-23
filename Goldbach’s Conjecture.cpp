#include <bits/stdc++.h>
using namespace std;
#define N 1000000
int primes[N];
void sieve(){
		for(int i=0;i<N;i++)
			primes[i]=1;
			primes[0]=primes[1]=0;
			for(int i=2;i<=N;i++){
				if(primes[i]==1){
					for(int j=2;i*j<=N;j++){
						primes[i*j]=0;
					}
				}
            }
		}
			int main()
			{
				sieve();
				int n;
				while(scanf("%d",&n) && n!=0){
					for(int a=3;a<n;a++){
						if(primes[a]==1){
							int b = n-a;
							if(primes[b]==1){
								cout<<n<<" = "<<a<<" + "<<b<<endl;
								break;
							}
						}
					}
				}
	return 0;
}
