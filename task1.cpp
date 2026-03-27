#include<iostream>
using namespace std;
main()
{
    char word[50]; 
    cout<<"Enter the word: ";
    cin>>word;
    for(int i=0;word[i]!='\0';i++){
        cout<<"Character "<< word[i] << "is at index"<<i<<endl;

    }
    

}