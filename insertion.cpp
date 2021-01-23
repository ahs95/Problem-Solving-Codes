#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int *a,int length)
{
    int i,j;
    for (i = 1; i < length; i++)
    {
        for (j = i; j > 0; j--)
        {
            if (a[j] < a[j-1])
            {
                swap(a[j],a[j-1]);
            }
            else break;
        }
    }

}

int main()
{
    int ara[1000];
    int length;
    cin >> length ;
    for(int i=0; i<length; i++) cin >> ara[i];
    InsertionSort(ara,length);
    for(int i=0; i<length; i++) cout << ara[i] << ' ';
    return 0;
}
