#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,c=1,temp;
	long long n,s,x,y;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>s;
		n=ceil(sqrt(double(s)));
		if(n*n - s<n){
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
		cout<<"Case"<<" "<<c++<<":"<<" "<<x<<" "<<y<<endl;
	}
	return 0;
}
