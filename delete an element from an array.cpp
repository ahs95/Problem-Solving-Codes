//deletion
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100],pos,c,n,val;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	cout<<"Enter"<<" "<<n<<" "<<"elements"<<endl;
	for(c=0;c<n;c++)
	    cin>>arr[c];
	cout<<"Enter the location you wish to delete an element"<<endl;
	cin>>pos;
	 if ( pos >= n+1 )
      printf("Deletion not possible.\n");
   else
   {
      for ( c = pos - 1 ; c < n - 1 ; c++ )
         arr[c] = arr[c+1];
 
      printf("Resultant array is\n");
 
      for( c = 0 ; c < n - 1 ; c++ )
         printf("%d\n", arr[c]);
   }
 
   return 0;
}
