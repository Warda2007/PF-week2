#include<iostream>
#include<string>
using namespace std;
main()
{
    int n;
    int count=0;
    cout<<"Enter the number of customers: ";
    cin>>n;
    cin.ignore();
    string names[n];
    cout<<"Enter the name of customer: ";
    for(int i=0; i<n; i++)
    getline(cin,names[i]);
    char ch;
    cout<<"Enter the character with which you want to find names starting with :";
    cin>>ch;
    for( int i=0; i<n; i++)
    if( names[i][0]==ch){
        count++ ;
    }
    cout<<"Names starting with " <<  ch<< "are " <<count <<endl;
}