 #include<iostream>
 using namespace std;
 main()
 {
     char ch;
     cout<<"Enter any character in lower case:" ;
     cin>>ch;
     if(ch >='0' && ch <='9'){
        cout<<"The character is a number"<<endl;
     }else if(ch == 'a'|| ch == 'e' || ch == 'i'|| ch =='o' || ch =='u'){
        cout<<"The character is a vowel" <<endl;
     }else if(ch >='a' && ch<='z'){
      cout<<"The character is a consonent"<<endl; 
     }
 }