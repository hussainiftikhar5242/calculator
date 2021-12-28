#include<iostream>
using namespace std;
main()
{
    float num1=0,num2=0;
    float result=0;
    char oper=0;
    cout<<"enter first number:";
    cin >> num1;
    cout<<"enter 2nd number:";
    cin >> num2;
    cout<<"enter opertaot (+,*,-,/):";
    cin >> oper;
    if(oper == '+')
    {
        result=num1+num2;
        cout<<"sum of two:"<<result;
    }
    else if(oper == '-')
    {
        result=num1-num2;
        cout<<"difference of two:"<<result;
    }
    else if(oper == '*')
    {
        result=num1*num2;
        cout<<"multiply of two:"<<result;
    }
    else 
    {
        result=num1/num2;
        cout<<"division of two:"<<result;
        
    }


}