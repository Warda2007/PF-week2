#include<iostream>
using namespace std;
main()
{
    int sum=0;
    float average=0;
    int number[5]={1,2,3,4,5} ;
    for(int idx=0; idx<5; idx++){
        sum=sum+number[idx] ;
    }
    average=sum/5 ;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<average<<endl;
}