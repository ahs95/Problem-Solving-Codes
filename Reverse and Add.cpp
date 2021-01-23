#include <bits/stdc++.h>
using namespace std;
long long int reversenum(long long int n){
    long long int reverse=0;
    while(n!=0){
        reverse = reverse * 10;
        reverse = reverse + n % 10;
        n = n/10;
    }
    return reverse;
}
int main()
{
    long long int t,i,p,a,m;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>p;
        m=0;
        a=reversenum(p);
        while(p!=a){
            p=p+a;
            a=reversenum(p);
            m++;
        }
        cout<<m<<" "<<p<<endl;
    }
    return 0;
}
