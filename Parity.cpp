#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,arr[100000],parity=0;
    while(scanf("%d",&n)==1 && n!=0){
        for(i=0;;i++){
            arr[i]=n%2;
            if(n==0){
                break;
            }
            n=n/2;
            if(arr[i]==1){
            parity++;
        }
}
    cout<<"The parity of ";
    for(j=i-1;j>=0;j--)
        cout<<arr[j];
    
    cout<<" is "<<parity<<" (mod 2)."<<endl;
    parity=0;
    }
    return 0;
}
