//hd=hot days,cd=cold days,pd=pleasant days
#include<iostream>
using namespace std;
int main()
{
    int num,i,a[30],hd[30],cd[30],pd[30],count1=0,count2=0,count3=0;
    float avg,sum;
    cout<<"Enter the number of temperatures you want to add";
    cin>>num;
    cout<<"enter the temperatures"<<endl;

     //taking in all temperature inputs
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }

    //finding pd,cd,hd

    for(i=0;i<num;i++)
    {
        sum=sum+a[i];
        if(a[i]>=85)
        {
            
            hd[count1]=a[i];
            count1++;
        }

        

        else if(a[i]>59 && a[i]<85)
        {
            pd[count2]=a[i];
            count2++;
        }
         
         
        else if(a[i]<60)
        {
            cd[count3]=a[i];
            count3++;
        }
    }
    cout<<"the number of hot days "<<count1<<endl;
    cout<<"the number of cold days "<<count3<<endl;
    cout<<"the number of pleasant days "<<count2<<endl;
    
    cout<<"the hot days are "<<endl;

    for(i=0;i<count1;i++)
    {
        cout<<hd[i]<<endl;
        
    }

    cout<<"the cold  days are "<<endl;

    for(i=0;i<count3;i++)
    {
        cout<<cd[i]<<endl;
        
    }


    cout<<"the pleasant days are "<<endl;

    for(i=0;i<count2;i++)
    {
        cout<<pd[i]<<endl;
        
    }
    avg=sum/num;

    cout<<"the average temperature is "<<avg<<endl;

    



    
    return 0;
}