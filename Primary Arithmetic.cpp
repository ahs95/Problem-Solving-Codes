#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,carry,add;
    
    while(1){
        cin>>x>>y;
        carry=0;
        add=0;
    
    if(x==0 && y==0){
        break;
    }
    while(x!=0 || y!=0){
        if((x%10+y%10)+add>9){
            carry++;
            add=1;
        }
        else{
            add=0;
        }
        x/=10;
        y/=10;
    }
        if(carry==0){
            cout<<"No carry operation."<<endl;
        }
        else if(carry==1){
            cout<<carry<<" carry operation."<<endl;
        }
        else{
             cout<<carry<<" carry operations."<<endl;
        }
    }
      
    return 0;
}
