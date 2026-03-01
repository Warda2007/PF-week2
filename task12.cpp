#include <iostream>
using namespace std;
main()
{
int min;
int fps;
int frames;

cout<<"Enter minutes:";
cin>>min;

cout<<"Enter fps:" ;
cin>>fps;

frames=min*60*fps;

cout<<"Total frames are:"<<frames;
}