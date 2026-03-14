#include<iostream>
using namespace std;
main()
{ 
int salary,laptopPrice;
float advance;
laptopPrice = 50000;
cout<<"Enter your salary:" ;
cin>>salary;
advance = (salary*0.5)*6;
if (salary  >= laptopPrice){
    cout<<"Yes y0u can buy laptop!" ;
}else{
    cout<<"No you cannot buy this laptop!";
int numberofmonths;
numberofmonths = laptopPrice/(salary*0.5);
cout<<"Number of months required are"<<numberofmonths;
}
}
