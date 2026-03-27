#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    string names[n];
    cout<<"Enter the names of students: ";
    for (int i=0; i<n; i++)
    cin>>names[i];
    cout<<"        student names      "<<endl;
    for(int i=0;i<n; i++)
    cout<< names[i] <<endl;
}
