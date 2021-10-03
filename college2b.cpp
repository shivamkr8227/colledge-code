#include<iostream>
using namespace std;
union student
{
    string name;
    int age,year,semester;
    float marks[5];
}stud;
int main()
{
    int i;
    //cout<<"Enter number of student";
    //cin>>a;
    union stud std;
    cout<<"Enter student detail:"<<endl;
    //for(i=0 ; i<a ; i++)
    //{
        cout<<"Enter name of student "<<endl;
        cin>>std.name;
        cout<<"Enter age of student "<<endl;
        cin>>std.age;
        cout<<"Enter year of student "<<endl;
        cin>>std.year;
        cout<<"Enter semester of student "<<endl;
        cin>>std.semester;
        cout<<"Enter marks of 5 subject";
        for(int j=0;j<5;j++)
        {
            cin>>std.marks[j];
        }
    //}
    cout<<endl<<"detail are"<<endl;
    //for(i=0 ; i<a ; i++)
    //{
        cout<<"Name of student "<<" is "<<std.name<<endl;
        cout<<"Age of student "<<" is "<<std.age<<endl;
        cout<<"year od admission of student "<<" is "<<std.year<<endl;
        cout<<"Semester of student "<<" is "<<std.semester<<endl;
        cout<<"Marks of 5 subject is ";
        for(int j=0;j<5;j++)
        {
            cout<<std.marks[i]<<",";
        }
    //}
    
    return 0;
}