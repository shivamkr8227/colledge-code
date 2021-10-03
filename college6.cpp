//swap 2 number using 1.call by value and 2.call by reference. give user a prompt 
//to choose between them with switch case

#include<iostream>
using namespace std;
void swapcallbyvalue(int,int);
void swapcallbyrefer(int *,int *);
int main()
{
    int x,y,n,*a,*b;
    cout<<"Enter 2 number";
    cin>>x>>y;
    a=&x;
    b=&y;
    cout<<"Enter your choice "<<endl;
    cout<<"1. Swap by call by value"<<endl;
    cout<<"2. Swap by call by reference"<<endl;
    cin>>n;
    cout<<"Number before swaping is:"<<x<<" "<<y<<endl;
    switch(n)
    {
        case 1:
            swapcallbyvalue(x,y);
            break;
        case 2:
            swapcallbyrefer(a,b);
            break;
    }
    return 0;
}
void swapcallbyvalue(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"Result with call by value"<<endl;
    cout<<"Number after swaping are:"<<a<<" "<<b<<endl;
}
void swapcallbyrefer(int *a,int *b)
{
    int c;
    c=(*a);
    (*a)=(*b);
    (*b)=c;
    cout<<"Result with call by reference"<<endl;
    cout<<"Number after swapping are:"<<(*a)<<" "<<(*b);
}