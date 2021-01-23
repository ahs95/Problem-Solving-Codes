#include <bits/stdc++.h>
using namespace std;
int main()
{
	int chimp[100000];
	int n,q,i,j,h,k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>chimp[i];
	}
	cin>>q;
	for(i=0;i<q;i++){
		cin>>h;
		int ans=0;
		for(j=0;j<n;j++){
			if(h>chimp[j]){
				ans=chimp[j];
			}
			else{
				break;
			}
		}
		if(ans==0) cout<<"X ";
		else cout<<ans<<" ";
		int ans2=0;
		for(k=n-1;k>=0;k--){
			if(h<chimp[k])
			{
				ans2=chimp[k];
			}
			else{
				break;
			}
		}
		if(ans2==0)cout<<"X"<<endl;
		else cout<<ans2<<endl;
	}
	return 0;
}
    
