//Create a structure of employee with following detail
//1.name
//2.age
//3.designation
//4.salary
#include<iostream>
using namespace std;

struct employee
{
    string name;
    int age,salary;
    string designation;
}emp;
int main()
{
    int a,i;
    cout<<"Enter number of employee";
    cin>>a;
    struct employee emp[a];
    cout<<"Enter employee detail:"<<endl;
    for(i=0 ; i<a ; i++)
    {
        cout<<"Enter name of employee "<<i+1<<endl;
        cin>>emp[i].name;
        cout<<"Enter age of employee "<<i+1<<endl;
        cin>>emp[i].age;
        cout<<"Enter designation of employee "<<i+1<<endl;
        cin>>emp[i].designation;
        cout<<"Enter salary of employee "<<i+1<<endl;
        cin>>emp[i].salary;
    }
    cout<<endl<<"detail are"<<endl;
    for(i=0 ; i<a ; i++)
    {
        cout<<"Name of employee "<<i+1<<" is "<<emp[i].name<<endl;
        cout<<"Age of employee "<<i+1<<" is "<<emp[i].age<<endl;
        cout<<"Designation of employee "<<i+1<<" is "<<emp[i].designation<<endl;
        cout<<"Salary of employee "<<i+1<<" is "<<emp[i].salary<<endl;
    }
    
    return 0;
}