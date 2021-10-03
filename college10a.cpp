//make a program to show the use of multiple inheritance by making multiple classes
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int classname;
        void studentdata()
        {
            cout<<"Enter name of student "<<endl;
            cin>>name;
            cout<<"Enter roll of student "<<endl;
            cin>>roll;
            cout<<"Enter class of student "<<endl;
            cin>>classname;
        }
        void display()
        {
            cout<<"Name of student is "<<name<<endl;
            cout<<"Roll of student is "<<roll<<endl;
            cout<<"Class in which student study is "<<classname<<endl;
        }

};
class marks : virtual public student
{
    public:
        int m[5];
        void setmarks()
        {
            cout<<"Enter marks obtain by student "<<endl;
            for(int i=0;i<5;i++)
            {
                cin>>m[i];
                if(m[i]>100)
                {
                    cout<<"Marks for subject m"<<i<<" is entered wrong "; 
                    cout<<"please enter correct marks";
                    i--;
                }
            }
        }
};
class sports : virtual public student
{
    public:
        int s;
        void setsports()
        {
            cout<<"Enter marks scored in sports ";
            cin>>s;
            if(s>100)
            {
                cout<<"Wrong marks entered for sports please enter correct marks"<<endl;
                cin>>s;
            }
        }
};
class result : public marks , public sports
{
    private:
        float avg=0;
        int i,p=0;
    public:
        void average()
        {
            for(i = 0; i < 5 ; i++)
            {
                if(m[i]<=30)
                {
                    cout<<name<<" is fail in the subject m"<<i<<endl;
                    p=1;
                }
            }
            if(s<=30)
            {
                cout<<name<<" is fail in the sports"<<endl;  
                p=1;
            }
            for(i=0;i<5;i++)
            {
                avg=avg+m[i];
            }
            avg=(avg+s)/6.0;
            if(p=0)
            {
                cout<<"Percentage of "<<name<<" is "<<avg<<" and he is pass"<<endl;
            }
            else
            {
                cout<<"Percentage of "<<name<<" is "<<avg<<" and he is fail"<<endl;
            }
        }
};
int main()
{
    result r;
    r.studentdata();
    r.setmarks();
    r.setsports();
    r.average();
    return 0;
}

