#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of resistors: ";
    cin>>n;
    double resistors[n];
    double total=0;
    cout<<"Enter resistance of each resistor in ohms: ";
    for (int i=0; i<n; i++){
        cin>> resistors[i];
        total=total+resistors[i];
    }
    cout<<"Total resistance is " << total<< " ohms"<<endl;
}