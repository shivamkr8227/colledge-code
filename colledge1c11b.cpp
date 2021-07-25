//A
//B C
//D E F
//G H I J
//K L M N O
#include<iostream>
using namespace std;

int main()
{
    int i,j,num;
    num=65;
    char ch;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            ch=char(num++);
            cout<<ch<<" " ;
            //num++;
        }
        cout<<endl;
    }
    return 0;
}