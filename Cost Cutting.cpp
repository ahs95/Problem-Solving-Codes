#include <iostream>
using namespace std;
int main ()
{
        int t,emp1 , emp2 , emp3,i; //for employee1 , employee2 , employee3

        cin>>t;
        for(i=0; i<=t; i++){
                cin>>emp1>>emp2>>emp3;
                if(emp2>emp1 && emp2<emp3 || emp2<emp1 && emp2>emp3){
                    cout<<"Case "<<i+1<<": "<<emp2<<endl;
                }
                else if(emp1>emp2 && emp1<emp3 || emp1<emp2 && emp1>emp3){
                    cout<<"Case "<<i+1<<": "<<emp1<<endl;
                }
                else{
                   cout<<"Case "<<i+1<<": "<<emp3<<endl;
                }

        }
        return 0;
}
