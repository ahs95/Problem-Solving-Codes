#include<bits/stdc++.h>
using namespace std;

int main()
{

    int ar[3500],ar2[3500],n;
    while(cin >> n){
        for(int i = 0; i < n; i++)cin >> ar[i];
        int j = 1;
        for(int i = 1; i < n;i++){
            ar2[j++] = abs(ar[i]-ar[i-1]);
        }
        sort(ar2+1,ar2+j);
        bool k = true;
        for(int i = 1; i < j; i++){
            if(ar2[i] != i){
                k = false;
                break;
            }
        }
        if(k)cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
    return 0;
}
