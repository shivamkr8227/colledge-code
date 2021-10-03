#include<iostream>
using namespace std;
int count =0;
class demo
{
    public:
     demo()
     {
         count++;
         cout<<"Constructor number  "<<count<<" is called"<<endl;
     }
     ~demo()
     {
         cout<<"This is the time destructor is called for object number ";
         cout<<count<<endl;
         count--;
     }
    
};
int main()
{

    cout<<"We are in the main function"<<endl;
    cout<<"We are going to call ourconstructor"<<endl;
    demo d1;
    cout<<"A constructor d1 is called"<<endl;
    {
        cout<<"We are in the constructor d1"<<endl;
        cout<<"Now we will call 2 more constructor"<<endl;
        demo d2,d3;
    cout<<"Existing the block of d1 constructor"<<endl;
    }
    cout<<"Back to main function"<<endl;
    return 0;
}