//to fine the number of vowel present in a array of string using pointer arithmetic
#include"iostream"
//#include<string>
using namespace std;

class find1
{
//    string a;
//    int i,count=0;
//    public:
//        void setdata()
//        {
//            cout<<"Enter a string ";
//            getline(cin,a);
//        }
//        void checkvowel()
//        {
//            for(i=0;i<a.length();i++)
//            {
//                if(a[i]==65||a[i]==69||a[i]==73||a[i]==79||a[i]==85||a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117)
//                {
//                    count++;
//                }
//            }
//            cout<<"Number of vowel in string is "<<count;
//        }
    char *str;
    public:
        void setdata(string *a)
        {
            int i,count=0;
            cout<<"String: "<<*a<<endl;
            for(i=0;i<(*a).length();i++)
            {
                if((*a)[i]==65||(*a)[i]==69||(*a)[i]==73||(*a)[i]==79||(*a)[i]==85||(*a)[i]==97||(*a)[i]==101||(*a)[i]==105||(*a)[i]==111||(*a)[i]==117)
                {
                    count++;
                }
            }
            cout<<"Number of vowel is "<<count;
        }
};
int main()
{
    find1 c;
//    c.setdata();
//    c.checkvowel();
    string s;
    cout<<"Enter the string: "<<endl;
    getline(cin,s);
    string *pt;
    pt=&s;
    c.setdata(pt);
    return 0;
}