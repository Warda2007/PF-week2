#include<iostream>
using namespace std;
int main()
{
     float speed;
     cout<<"Enter speed:" ;
     cin>>speed;
     if(speed<=10){
        cout<<"Slow" <<endl;
     }else if(speed<=50){
cout<<"Average"<<endl;
     }else if(speed<=150){
        cout<<"Fast"<<endl;
     }else if(speed<=1000){
        cout<<"Ultra Fast"<<endl;
     }else if(speed>1000){
        cout<<"extremely fast"<<endl;
     }
}