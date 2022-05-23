#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int num,i,j,k,a[15],temp;
    float sqr=0,s,avg;
    float s_dev;
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
   
    //displaying the largest and smallest number
    cout<<"The largest no is "<<a[num-1]<<endl;
    cout<<"The smallest no is "<<a[0]<<endl;
    cout<<"The average value is ";
     //if odd terms we have single middle term
    if(num%2!=0)
    {
        avg=a[((num+1)/2)-1]; 
        cout<<avg<<endl;  
    }
    else if(num%2==0)//if even then we have two middle terms we take the mean of them as avg term
    {
        
        avg=(a[(num/2)-1]+a[(num/2)])/2;
        cout<<avg<<endl;

    }
    cout<<"The range of data is"<<a[num-1]-a[0]<<endl;//range =highest data -lowest data

    //collecting the sum of squraes in variable sqr
    for(i=0;i<num;i++)
    {
        
        sqr=sqr+a[i]*a[i];
        
        
    }
    
    s=(sqr/num)-(avg*avg);//using accesory variable s to simplify the expression
    s_dev=sqrt(s);//s_dev is the standard deviation
    cout<<"standard deviation is"<<s_dev<<endl;


    return 0;
}