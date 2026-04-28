#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string pyramidvolume(float length, float width, float height, string unit)
{
    double volumeinmetres=(length * width * height)/3.0;
    double resultvolume=0.0;
    if(unit== "millimetres")
    {
      resultvolume= volumeinmetres*pow(1000,3);
    }
      if(unit == "metres")
      {
      resultvolume = volumeinmetres;
      }
      if(unit== "centimetres")
      {
        resultvolume= volumeinmetres *pow(100,2);
      }
      if (unit== "kilometres")
      {
        resultvolume = volumeinmetres/ pow(1000,3);
      }
      return to_string(resultvolume) + "cubic" + unit;
}

int main()
{
    float l,w,h;
    string unit;
    cout<<"Enter length, width, height(in metres):"<<endl;
    cin>>l>>w>>h;
    cout<<"Enter output units(millimetres, metres, centimetres, kilometres):"<<endl;
    cin>>unit;
    cout<<pyramidvolume(l,w,h,unit)<<endl;
    return 0;

}