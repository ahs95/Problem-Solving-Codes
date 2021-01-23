#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ara[] = {1,2,3,4,5,6,7,8,9,95,100};
	int lo_indx = 0;
	int hi_indx = 9;
	int mid_indx;
	int num = 95;
	while(lo_indx<=hi_indx){
		mid_indx = lo_indx+(hi_indx-lo_indx)/2;
		if(num==ara[mid_indx]){
			break;
		}
		if(num<ara[mid_indx]){ 
			hi_indx = mid_indx-1;
		}
		else{
			lo_indx = mid_indx+1;
		}
	}
		if(lo_indx>hi_indx){
			cout<<"Not found in the array"<<endl;
		}
		else{
			cout<<ara[mid_indx]<<" "<<"in the position"<<" "<<mid_indx<<endl;
		}
	
	return 0;
}
