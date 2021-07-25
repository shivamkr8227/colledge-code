//    *
//   * *
//  * * *
// * * * *
//* * * * *

#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    cout<<"Diagram is "<<endl;
    for(i=1;i<=5;i++)
    {
        for(k=6;k>i;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}