#include<iostream>
using namespace std;
main()
{
int charge;
int time;
int current;
cout<<" Enter the charge in coulombs:" ;
cin>>charge;
cout<<" Enter the time in seconds:" ;
cin>>time;
current=charge/time;
cout<<" The current in amperes is:" <<current;
}
