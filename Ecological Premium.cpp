#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,f,frm,ani,ef,i,j,sum;
    (cin>>n);
    for(i=0;i<n;i++){
        cin>>f;
        sum=0;
        for(j=0;j<f;j++){
            cin>>frm>>ani>>ef;
            sum+=frm * ef;
            }
            cout<<sum<<endl;
            
        }
    
    return 0;
}

