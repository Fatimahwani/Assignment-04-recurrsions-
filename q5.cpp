//in this program we ask the user how many employees are there
//each employee gives his identification no,no of hrs worked and hourly wage rate
//the computer tells him his pay after taking into account tax and extra hrs
//when all employees get the info computer tells the total payroll and avg amount payed
#include<iostream>
using namespace std;
int main()
{
    int num,i,id;
    float rate,hours,pay,payroll=0.0;
    cout<<"Enter the number of employees";
    cin>>num;

    for(i=1;i<num+1;i++)//it runs as many times as many employees
    {
        cout<<"Enter your employee id"<<endl;
        cin>>id;

        cout<<"enter your hourly wage rate"<<endl;
        cin>>rate;

        cout<<"Enter the number of hours you have worked this week"<<endl;
        cin>>hours;

         if(hours>40)//extra hours
         {
             pay=(hours-40)*1.5+40*rate;
             
         }
         else
         {
             pay=hours*rate;
         }
        pay=pay-((3.625/100)*pay);//tax
        payroll=payroll+pay;


        cout<<"The pay for employee having id: "<<id<<"is "<<pay<<endl;
    }
    
    cout<<"The total payroll is "<<payroll<<endl;//at the end payroll is dispalyed
    cout<<"The average amount payed is"<<payroll/(i-1)<<endl;
    return 0;
}