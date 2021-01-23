#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b){
	while(b!=0){
		long long int remain = a%b;
		a=b;
		b=remain;
	}
	return a;
}
long long int lcm(long int a,long long int b){
	return(a*b/gcd(a,b));
}
int main()
{
	long long int n,x,y,sq,i,j;
	while(cin>>n){
		vector <long long> fact;
		if(n==0)break;
		sq=sqrt(n); //i= total number of divisors 
		for(i=1;i<=sq;i++){
			if(n%i==0){
				fact.push_back(i);
				fact.push_back(n/i);
			}
		}
		if(sq*sq==n) fact.pop_back();
		int count=0;
		int vsize=fact.size();
		for(i=0;i<vsize;i++){
			for(j=i;j<vsize;j++){
				if(lcm(fact[i],fact[j])==n) 
				count++;
			}
		}
		cout<<n<<" "<<count<<endl;
	}
	return 0;
}
