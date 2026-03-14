#include<iostream>
using namespace std;
int main()
{
    int choice;
    float num1,num2,result;
    char op;
    cout<<"-----SIMPLE CALCULATOR-----"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Clear screen"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice(1-6): " ;
    cin>>choice;
    cout<<"Enter 1st number: " ;
    cin>>num1;
    cout<<"Enter 2nd number: " ;
    cin>>num2;
    if(choice==1){
        result =num1 + num2;
        cout<<"Result is: "<<result<<endl;
    }else if(choice==2){
        result= num1-num2;
        cout<<"Result is: "<<result<<endl;
    }else if(choice==3){
        result=num1*num2;
        cout<<"result is: "<<result<<endl;
    }else if(choice==4){
        result=num1/num2;
        cout<<"result is: "<<result<<endl;
    }else if(choice==5){
        cout<<"Screen is cleared"<<endl;
    }else if(choice==6){
        cout<<"EXIT"<<endl;
    }
    return 0;
    }
