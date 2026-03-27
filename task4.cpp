#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter how many numbers: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<< "numbers" <<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Numbers in reverse order " <<endl;
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<< " " <<endl;
    }
    cout<<endl;
}