#include<iostream>
using namespace std;
int main()
{
    string shape;
    float length,width,area,radius,base,height,pi=3.14;
    cout<<"Enter the name of geometric figure:" ;
    cin>>shape;
if(shape=="circle"){
cout<<"Enter the radius of circle:"<<endl;
cin>>radius;
area=pi*(radius*radius);
cout<<"The area is: "<<area<<endl;
}else if(shape=="square"){
    cout<<"Enter the length of one side:"<<endl;
    cin>>length;
    area=length*length;
    cout<<"The area is: "<<area<<endl;
}else if(shape=="rectangle"){
    cout<<"Enter length:"<<endl;
    cin>>length;
    cout<<"Enter width:"<<endl;
    cin>>width;
    area=length*width;
    cout<<"The area is: "<<area<<endl;
}else if(shape=="triangle"){
    cout<<"Enter the base:"<<endl;
    cin>>base;
    cout<<"Enter the height:" <<endl;
    cin>>height;
    area=0.5*base*height;
    cout<<"The area is: "<<area<<endl;
}
}