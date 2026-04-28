#include<iostream>
using namespace std;
int multiply(int num);
int main()
{
    int num, result;
    cout<<"Enter the number:";
    cin>>num;
    result=multiply( num);
    cout<<result;
    
}
int multiply (int num)
{
int total;
total=num*5;
return total;
}