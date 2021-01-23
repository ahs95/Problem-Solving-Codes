#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int N,a[1000];

    while(scanf("%d",&N)!=EOF){
        for(int i = 0;i<N;i++)
            cin>>a[i];

        int ans = 0;

        for(int i = 1;i<N;i++)
            for(int j = 0;j<i;j++)
                if(a[j]>a[i])
                    ans++;



        cout<<"Minimum exchange operations : " << ans <<endl;
    }

    return 0;
}
