#include<iostream>
using namespace std;
main()
{
int number[5];
for(int i=0; i<5; i++)
{
    cout<<"Enter the number: ";
    cin>> number[i];
}
cout<<"The first number is: " <<number[0]<<endl;
cout<<"The last number is: " <<number[4]<<endl;

}