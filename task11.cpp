#include<iostream>
using namespace std;
main()
{
    char str[500], j=0;
    cout<<"Enter the sentence: ";
    cin.getline(str,500);
    for(int i=0; str[i]; i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
           str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            str[j++]=str[i];
           }
           str[j]='\0';
    }
    cout<<"Sentence without vovels : "<< str<<endl;

}