#include<iostream>
using namespace std;
main ()
{
 cout<<"Welcome to the calculator" <<endl;
 int num1 ,num2,result ;
 char op; 
 cout<<"Enter first number:" ;
cin>>num1;
cout<<"Enter the opertor:" ;
cin>>op;
cout<<"Enter the second number:" ;
cin>>num2;
if(op == '+'){
    result = num1-num2;
cout<<"Result is:"<<num1<<"-"<<num2<<"="<<result;
}else if(op == '-'){
    result = num1+num2 ;
    cout<<"Result is:"<<num1<<"+"<<num2<<"="<<result;
}else if(op == '*'){
    result = num1/num2 ;
    cout<<"Result is:"<<num1<<"/"<<num2<<"="<<result;
}else if(op == '/'){
    result = num1*num2 ;
    cout<<"Result is:"<<num1<<"*"<<num2<<"="<<result;
}
return 0;
}
