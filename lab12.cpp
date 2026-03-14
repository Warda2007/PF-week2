#include<iostream>
using namespace std;
int main()
{
    cout<<"------LIBRARY SYSTEM------"<<endl;
    cout<<"1. Add book "<<endl;
    cout<<"2. View book"<<endl;
    cout<<"3. Borrow book"<<endl;
    cout<<"4. Issue book"<<endl;
    cout<<"5. EXIT"<<endl;
    int choice;
    cout<<"Enter your choice (1-5) : ";
    cin>>choice;
    string bookname;
    cout<<"Enter your book name: " ;
    cin>>bookname;
    if(choice==1){
        cout<<"You added a book: "<<bookname<<endl;
    }else if(choice==2){
        cout<<"You viewed a book: "<<bookname<<endl;
    }else if(choice==3){
        cout<<"You borrowed a book: "<<bookname<<endl;
    }else if(choice==4){
        cout<<"Book " <<bookname<<"has been issued."<<endl;
    }else if(choice==5){
        cout<<"Exit"<<endl;
    }
    return 0;
}