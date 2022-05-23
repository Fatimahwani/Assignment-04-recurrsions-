#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<21;i++)
    {
        for(j=1;j<2*i;j++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
    return 0;
}