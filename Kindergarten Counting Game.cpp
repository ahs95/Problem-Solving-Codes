#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[1000];
    int i,cnt;
    while(gets(name)){
        cnt=0;
        for(i=0;name[i]!= '\0';i++){
            if(((name[i]>= 'a' && name[i]<= 'z') || (name[i]>= 'A' && name[i]<= 'Z')) && ((name[i+1]< 'a' || name[i+1]> 'z') && (name[i+1]< 'A' || name[i+1]> 'Z')))
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
