#include <iostream>
using namespace std;
main()
{
float adultTicket;
float childTicket;
int adultTicketSold;
int childTicketSold;
string movieName;
float donatedAmount;

cout<<"Enter movie Name:";
cin>>movieName;

cout<<"Enter adult ticket price:";
cin>>adultTicket;

cout<<"Enter child ticket price:";
cin>>childTicket;

cout<<"Enter Total Num of adult ticket sold:";
cin>>adultTicketSold;

cout<<"Enter Total Num of child ticket sold:";
cin>>childTicketSold;

cout<<"Enter percentage amount to be donated:";
cin>>donatedAmount;

cout<<"-----------------------------------------------------------------"<<endl;

cout<<"Movie name:"<<movieName<<endl;

int total;
total=(adultTicket*adultTicketSold)+(childTicketSold*childTicket);
cout<<"Total amount generated from tickets:"<<total<< ;


float donation;
donation=(donatedAmount/100)*total;

cout<<"Total amount to charity: "<<donation<<endl;

float remaining;
remaining=(total)-(donation);

cout<<"total remaining amount:"<<remaining;
}