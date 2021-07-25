//          1
//        2 3 2
//      3 4 5 4 3
//    4 5 6 7 6 5 4
//  5 6 7 8 9 8 7 6 5
#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l,m=1;
    cout<<"Diagram is "<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"  ";
        }
        for(k=i;k<=m;k++)
        {
            cout<<k<<" ";
        }
        for(l=m-1;l>=i;l--)
        {
            cout<<l<<" ";
        }
        m=m+2;
        cout<<endl;

    }
    cout<<endl;
    return 0;
}