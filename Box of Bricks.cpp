#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h[105],i,moves,havg,sum,set=1;
    while((scanf("%d",&n)==1 && n!=0)){
        moves = sum = 0;
        for(i=0;i<n;i++){   
        cin>>h[i];
        sum+=h[i];
    }
        havg= sum/n;
        for(i=0;i<n;i++){
            if(h[i]>havg)
                moves+= h[i]-havg;
        }
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",set++,moves);
    }
    return 0;
}
