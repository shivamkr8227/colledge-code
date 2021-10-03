//Show the use of inline function and perform different arithmetic operation
#include<iostream>
using namespace std;
inline int sum(int a,int b)
{
    return (a+b);
}
inline int differ(int a,int b)
{
    return (a-b);
}
inline int multi(int a,int b)
{
    return (a*b);
}
inline int divis(int a,int b)
{
    return (a/b);
}
inline int modus(int a,int b)
{
    return (a%b);
}
int main()
{
    int x,y;
    cout<<"Enter 2 number";
    cin>>x>>y;
    cout<<"Sum is "<<sum(x,y)<<endl;
    cout<<"Difference is "<<differ(x,y)<<endl;
    cout<<"Multiple is "<<multi(x,y)<<endl;
    cout<<"Division is "<<divis(x,y)<<endl;
    cout<<"Modulus is "<<modus(x,y)<<endl;
    return 0;
}