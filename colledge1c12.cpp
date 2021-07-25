//        1 
//      1 2 1 
//    1 2 3 2 1 
//  1 2 3 4 3 2 1 
//1 2 3 4 5 4 3 2 1
#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"  ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k<<" ";

        }
        k=k-1;
        for(int l=i-1;l>=1;l--)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}