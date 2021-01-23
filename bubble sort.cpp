#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100],i,j,temp, num_of_ele = 5;
	printf("Enter %d elements\n",num_of_ele);
	for(i=0;i<num_of_ele;i++){
		cin>>arr[i];
	}
	for(i=0;i<num_of_ele;i++){
		for(j=0;j<num_of_ele-i-1;j++){
			if(arr[j]>arr[j+1]){ //use < for decreasing order
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(i=0;i<num_of_ele;i++)
	cout<<arr[i]<<endl;
	return 0;
}
