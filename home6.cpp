#include<iostream>
#include<string>
using namespace std;
main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    cin.ignore();
    string name[n];
    cout<<"Enter name of  " << n<< "students :";
    for(int i=0; i<n; i++)
    getline(cin, name[i]);
for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++)
    if(name[i]>name[j]){
        string temp =name[i];
    name[i]=name[j];
    name[j]=temp;
    }
    for(int i=0; i<n; i++)
    cout<< name[i] <<endl;
}