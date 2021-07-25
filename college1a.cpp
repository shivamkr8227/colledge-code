#include<iostream>
using namespace std;

int main()
{
    int unit;
    float cost=50;
    cout<<"Enter electricity used by user";
    cin>>unit;
    if(unit<=100)
    {
        cost = cost + unit * 0.50;
        cout<<"Bill is "<<cost;
    }
    else if(unit<=300)
    {
        unit = unit-100;
        cost = cost + 100 * 0.50 + unit * 0.80;
        cout<<"Bill is "<<cost;
    }
    else if(unit>300)
    {
        unit = unit - 300;
        cost = cost + 100 * 0.50 + 200 * 0.80 + unit * 0.90 ;
        if(cost>300)
        {
        cost = cost + ( 15.0 / 100.0 ) * cost;
        }
        cout<<"Bill is "<<cost;
    }
    return 0;
}   
