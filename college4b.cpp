//sum of factorial of given number
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int i=1,num,c;
//    cout<<"Enter the number: ";
//    cin>>num;
//    
//    cout<<"Factorial is: ";
//    while(num>1)
//    {
//        i=i*num;
//        num--;
//    }
//    cout<<i;
//    
//    int n=0;
//    while(i>0)
//    {
//        c=i%10;
//        n=n+c;
//        i=i/10;
//    }
//    cout<<"\nSum of factorial is: "<<n;
//    return 0;
//}


//sum of factorial using function returning value4
//#include<iostream>
//using namespace std;
//int factorial(int);
//int sumfactor(int);
//int main()
//{
//    int num,i;
//    cout<<"Enter number:";
//    cin>>num;
//    i=factorial(num);
//    cout<<"Factorial is: "<<i<<endl;
//    i=sumfactor(i);
//    cout<<"Sum of factorial is: "<<i<<endl;
//}
//int factorial(int n)
//{
//    int c=1;
//    while(n>1)
//    {
//        c=n*c;
//        n--;
//    }
//    return c;
//}
//int sumfactor(int n)
//{
//    int a,i=0;
//    while(n>0)
//    {
//        a=n%10;
//        i=a+i;
//        n=n/10;
//    }
//    return i;
//}

//Sum of factorial using pointer in returning function
#include<iostream>
using namespace std;
int factorial(int *);
int sumfactor(int *);
int main()
{
    int i,*p,num;
    cout<<"Enter number: ";
    cin>>num;
    p=&num;
    i=factorial(p);
    cout<<"factorial is: "<<i<<endl;
    p=&i;
    i=sumfactor(p);
    cout<<"Sum of factorial is "<<i;
    return 0;
} 
int factorial(int *n)
{
    int l,c=1;
    l=*n;
    while(l>1)
    {
        c=c*l;
        l--;
    }
    return c;
}
int sumfactor(int *n)
{
    int i,c;
    i=0;
    while(*n>0)
    {
        c=(*n)%10;
        i=c+i;
        (*n)=(*n)/10;
    }
    return i;
}