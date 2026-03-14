#include<iostream>
using namespace std;
int main()
{
    int temp1,temp2 ;
    cout<<"Enter temperature of first city:" ;
    cin>>temp1;
    cout<<"Enter temperature of second cit:" ;
    cin>>temp2;
    if(temp1 -temp2==10 || temp2-temp1==10){
cout<<"The difference is too big" <<endl;
cout<<"Program ends" <<endl;
    }else{
        cout<<"Program Ends"<<endl;
    }
}