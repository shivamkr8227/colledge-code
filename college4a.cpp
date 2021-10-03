#include<iostream>
using namespace std;

//int main()
//{
//    int i=0,j,num,c;
//    cout<<"Enter the number";
//    cin>>num;
//    j=num;
//    while(num>0)
//    {
//        c=num%10;
//        i=c+i*10;
//        num=num/10;
//    }
//    cout<<"Your number is "<<j<<endl;
//    cout<<"Your reverse number is "<<i<<endl;
//    return 0;
//}


//make a code to reverse number with function without return type
//void rev(int );
//int main()
//{
//    int num;
//    cout<<"Enter a number";
//    cin>>num;
//    cout<<"Number entered is "<<num<<endl;
//    rev(num);
//    return 0;
//}
//void rev(int n)
//{
//    int c,i=0;
//    while(n>0)
//    {
//        c=n%10;
//        i=c+i*10;
//        n=n/10;
//    }
//    cout<<"Reverse number is "<<i;
//}

//make a code to reverse number with function with return type
//int rev(int );
//int main()
//{
//    int num,rever;
//    cout<<"Enter a number";
//    cin>>num;
//    cout<<"Number entered is "<<num<<endl;
//    rever=rev(num);
//    cout<<"Reverse number is "<<rever;
//    return 0;
//}
//int rev(int n)
//{
//    int c,i=0;
//    while(n>0)
//    {
//        c=n%10;
//        i=c+i*10;
//        n=n/10;
//    }
//    return i;
//}

//make a code with function and pointer to reverse a number
void rev(int *);
int main()
{
    int num,*n;
    cout<<"Enter a number";
    cin>>num;
    n=&num;
    cout<<"Number entered is "<<num<<endl;
    rev(n);
    return 0;
}
void rev(int *n)
{
    int c,i=0;
    while(*n>0)
    {
        c=*n%10;
        i=c+i*10;
        *n=*n/10;
    }
    cout<<"Reverse number is "<<i;
}