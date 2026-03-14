#include<iostream>
using namespace std;
main()
{
    string mypassword,userenter;
    mypassword = "pass123";
    cout<<"Enter your password: " ;
    cin>>userenter;
    if(userenter==mypassword){
        cout<<"congratulations you have cracked it!!";
    }else{
        cout<<"Try again,it ain't that easy.";
    }
}