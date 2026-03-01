#include<iostream>
using namespace std;
main()
{
int imposter;
int players;
int chance;

cout<<"Enter imposters:" ;
cin>>imposter;

cout<<"Enter players:" ;
cin>>players;

chance=100 * (imposter/players);
cout<<"chance is :"<<chance<<"%";
}