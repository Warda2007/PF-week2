#include <iostream>
using namespace std;
main()
{
float Area;
float width;
float height;
float walls;

cout<<"Enter area :" ;
cin>>Area;

cout<<"Enter width:" ;
cin>>width;

cout<<"Enter height:" ;
cin>>height;

walls= Area/(width*height);

cout<<"walls painted:"<<walls;
}