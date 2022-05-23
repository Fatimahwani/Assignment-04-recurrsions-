#include<iostream>
using namespace std;
int main()
{
    int people=1,chairs,i,arr=1;
    cout<<"enter the number of people";
    cin>>people;

    cout<<"Enter the number of chairs";
    cin>>chairs;

    for(i=0;i<chairs;i++)
    {
        arr=arr*(people-i);
        
    }

    cout<<"the possible arrangements are"<<arr;

    
    return 0;
}