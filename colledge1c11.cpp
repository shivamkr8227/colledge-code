//a
//b c
//d e f
//g h i j
//k l m n o
#include<iostream>
using namespace std;

int main()
{
    int i,j,num;
    num=97;
    char ch;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            ch=char(num);
            cout<<ch<<" " ;
            num++;
        }
        cout<<endl;
    }
    return 0;
}