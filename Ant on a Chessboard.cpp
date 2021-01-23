#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long m,s,x,y;
	int temp,n;
	while(1){
		cin>>s;
	    if(s==0){
		    break;
	}
	    n=ceil(sqrt(double (s)));
	    if(n*n-s<n){
		    x=n;
		    y=n*n-s+1;
	}
	else{
		x=-n*n+2*n+s-1;
		y=n;
	}
	if(n&1){
		temp=x;
		x=y;
		y=temp;
	}
	cout<<x<<" "<<y<<endl;
}
	return 0;
}
