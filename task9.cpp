#include <iostream>
using namespace std;
main()
{
int population;
cout<<"Enter current world population: "<<endl;
cin>>population;

int birthrate;
cout<<"Enter monthly birthrate: "<<endl;
cin>>birthrate;

int decades=3;
int years=30;
int month=360;
int afterDecade=(population)+(month*birthrate);

cout<<"population after 3 decades will be : "<<afterDecade;
}