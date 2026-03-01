#include<iostream>
using namespace std;
main()
{
string name;
int matric;
int inter;
int ecatmarks;
float Aggregate;
cout<<" Enter Your name:" ;
cin>>name;
cout<<" enter matric marks(out of1100): ";
cin>>matric;
cout<<" enter inter marks(out of1200):" ;
cin>>inter;
cout<<" enter ecat marks(out of 400):" ;
cin>>ecatmarks;
Aggregate=((matric/1100.0)*0.10)+((inter/1200.0)*0.40)+((ecatmarks/400.0)*0.50);
cout<<"Aggregate score for" <<name<< "is:" <<Aggregate;
} 
