#include<iostream>
using namespace std;

int main()
{
    int candidate[5]={0,0,0,0,0};
    int n,i=0,spoil=0;
    cout<<"Enter number of voter";
    cin>>n;
    int voter[n];
    cout<<"Cast your vote ";
    do{
        cin>>voter[i];
        i++;
    }while(i<n);
    i=0;
    do
    {
        switch(voter[i])
        {
            case 1:
                candidate[0]++;
                break;
            case 2:
                candidate[1]++;
                break;
            case 3:
                candidate[2]++; 
                break;
            case 4:
                candidate[3]++;
                break;
            case 5:
                candidate[4]++;
                break;
            default:
                spoil++;
                break;
        }
        i++;
    }while(i<n);
    cout<<"Vote get by candidate 1 is "<<candidate[0]<<endl;
    cout<<"Vote get by candidate 2 is "<<candidate[1]<<endl;
    cout<<"Vote get by candidate 3 is "<<candidate[2]<<endl;
    cout<<"Vote get by candidate 4 is "<<candidate[3]<<endl;
    cout<<"Vote get by candidate 5 is "<<candidate[4]<<endl;
    cout<<"Vote get spoiled during voting is "<<spoil<<endl;
    return 0;
}
