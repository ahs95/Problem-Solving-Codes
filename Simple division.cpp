#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	
	while(b!=0){
		int remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}
    int main()
    {
    	int n;
    	while(scanf("%d",&n) && n!=0){
    		vector <int> a;
    		do{
    			a.push_back(n);
			} while(scanf("%d",&n) && n!=0);
			int ans = 0;
			for (int i=1;i<a.size(); i++)
			    ans = gcd( a[0]-a[i], ans );
		
		printf("%d\n", abs(ans));
	}
		return 0;
	}
