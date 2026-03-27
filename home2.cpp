#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the number of elements: " ;
    cin>>n;
    int arr[n];
    cout<<"enter "<< n<< "elements:" ;
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count++ ;
        }
    }
    cout<<"Even numbers are: "<<  count<<endl;
}