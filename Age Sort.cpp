#include<bits/stdc++.h>
using namespace std;
long int age[2000005];

int main()
{

    int n;
    while(scanf("%d",&n)==1 && n!=0){
        for(int i = 0; i < n; i++){
            scanf("%d",&age[i]);
        }
        sort(age,age+n);
        for(int i = 0; i < n; i++){
            printf("%ld",age[i]);
            if(i < n-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
