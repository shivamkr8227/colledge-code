//show the use of virtual function in different classes name cpolygon,ctriangle
//crectangel. make virtual function name area.
#include<iostream>
#include<math.h>
using namespace std;
class cpolygon
{
    protected:
        float l1,l2;
    public:
        cpolygon(float l,float b)
        {
            l1=l;
            l2=b;
        }
        virtual void area(){};
};
class ctriangle : public cpolygon
{
    float l3,ar,s;
    public:
        ctriangle(float l,float b,float h) : cpolygon(l,b)
        {
            l3=h;
        }
        void area()
        {
            s=(l1+l2+l3)/2.0;
            cout<<s<<endl;
            ar=sqrt(s*(s-l1)*(s-l2)*(s-l3));
            cout<<"Area of triangle is "<<ar<<endl;
        }
};
class crectangle : public cpolygon
{
    float ar;
    public:
        crectangle(float l,float b): cpolygon(l,b){};
        void area()
        {
            ar=l1*l2;
            cout<<"Area of rectangle is "<<ar;
        }
};
int main()
{
    float a1,a2,a3;
    //triangle
    cout<<"Enter sides of triangle ";
    cin>>a1>>a2>>a3;
    ctriangle t1(a1,a2,a3);
    //rectangle
    cout<<"Enter sides of rectangle ";
    cin>>a1>>a2;
    crectangle r1(a1,a2);
    cpolygon * list[2];
    list[0]= &t1;
    list[1]= &r1;
    cout<<"****Triangle****\n";
    list[0]->area();
    cout<<"****Rectangle****\n";
    list[1]->area();
    return 0;
}