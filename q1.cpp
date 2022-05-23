#include<iostream>

using namespace std;
int main()
{
    int num,i,j,k,a[15],temp;
    float avg;
    cout<<"Enter the number of terms"<<endl;
    cin>>num;

    //taking in all numbers
    cout<<"enter each term"<<endl;
    for(i=0;i<num;i++)
    {
        cin>>a[i];

    }

    //sorting
    for(j=0;j<num-1;j++)
    {
        for(k=0;k<num-1;k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
               
            }
        }
    }
   

    cout<<"The largest no is "<<a[num-1]<<endl;
    cout<<"The smallest no is "<<a[0]<<endl;
    cout<<"The average value is ";

    if(num%2!=0)
    {
        avg=a[((num+1)/2)-1]; 
        cout<<avg;  
    }
    else if(num%2==0)
    {
         avg=(a[(num/2)-1]+a[(num/2)])/2;
         cout<<avg<<endl;
    }


    return 0;
}