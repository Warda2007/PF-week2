#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the number of elememts: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<< n <<"elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int largest= arr[0];
    int smallest= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]> largest)
        largest= arr[i];
    if (arr[i]<smallest)
    smallest=arr[i];
    }
cout<<"Largest number is: "<< largest<< endl;
cout<<"smallest number is: "<< smallest<<endl;

    
}