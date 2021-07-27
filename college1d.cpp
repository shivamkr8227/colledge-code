#include<iostream>
using namespace std;

int main()
{
    int a,i,b=0,c=1,temp;
    cout<<"Enter upto how many term you want the fibonacci series:";
    cin>>a;
    cout<<b<<","<<c<<",";
    for(i=0;i<a-2;i++)
    {
        temp=b+c;
        cout<<temp<<",";
        b=c;
        c=temp;
    }
    return 0;
}
