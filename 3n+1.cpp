#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,n;
    while(cin>>i>>j){
        int tempi=i;
        int tempj=j;
        if(i>j)
            swap(i,j);
        int maxcycle_len= INT_MIN;
        int cycle_len;

    while(i<=j){
        n=i;
        cycle_len = 1;
        while(n!=1){
            if(n%2==0)
                n=n/2;
            else
                n= (n*3)+1;
            cycle_len++;
        }
        if(cycle_len > maxcycle_len)
            maxcycle_len=cycle_len;
        i++;
    }
    cout<<tempi<<" "<<tempj<<" "<<maxcycle_len<<endl;
    }
    return 0;
}
