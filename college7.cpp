#include<iostream>
using namespace std;
void demo1()
{
    static int count1=0;
    cout<<count1<<" ";
    count1++;
}
void demo2()
{
    int count2=0;
    cout<<count2<<" ";
    count2++;
}
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        demo1();//here value of count1 never reset to zero even the function is called
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
        demo2();//here value of count2 will reset everytime function is called
    }
    return 0;
}