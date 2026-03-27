#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    for(int i=0; i<word.length(); i++){
        if(word[i]>='a' && word[i]<='z')
        word[i]= (word[i]=='z')?'a': word[i]+1;
        else if (word[i]>='A' && word[i]<='Z')
        word[i]= (word[i]=='Z')?'A': word[i]+1;
    }
   cout<<"Output " <<word<<endl;
}