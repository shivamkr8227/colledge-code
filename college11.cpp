#include<iostream>
using namespace std;
class num2;

class num1
{
    int a;
    public:
        void geta(int numb1)
        {
            a=numb1;
        }
        friend void add(num1,num2);
};
class num2
{
    int b;
    public:
        void getb(int numb2)
        {
            b=numb2;
        }
        friend void add(num1,num2);
};
void add(num1 o1,num2 o2)
{
    cout<<"Multiply is "<<o1.a * o2.b;
}
int main()
{
    num1 s;
    s.geta(3);
    num2 d;
    d.getb(7);
    add(s,d);
    return 0;

}