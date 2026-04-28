#include<iostream>
using namespace std;
void add(int number1, int number2);
main(){
    cout<<"Enter 1st number: ";
    int number1;
    cin>>number1;
    cout<<"Enter 2nd number: ";
    int number2;
    cin>>number2;
    add(number1,number2);
    return 0;

}
void add(int number1, int number2)
{
    cout<<"Sum:"<<number1+number2;
}