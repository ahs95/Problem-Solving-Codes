#include <bits/stdc++.h>
using namespace std;
int main()
{
	int M,N,num,minnum,maxnum;
	while(scanf("%d %d",&M,&N)){
	    if(N==0 && M==0) break;
	    minnum = min(M,N);
	    maxnum = max(M,N);
	    if(minnum == 1)
	    num = maxnum;
	    else if(minnum == 2){
	    	num = 4*int(maxnum/4) + 2*min(2,maxnum%4);
		}
		else
		    num = (M*N + 1) / 2;
	    printf("%d knights may be placed on a %d row %d column board.\n",num,M,N);
	    
    }
    return 0;
}
