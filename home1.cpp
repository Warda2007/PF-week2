#include<iostream>
using namespace std;
main()
{
    int n, sum=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<< n<<"elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum is "<< sum<<endl;
}