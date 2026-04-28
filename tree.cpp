#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float distance, angle;
    cout<<"Enter the distance of tree(in feet):";
    cin>>distance;
    cout<<"Enter the angle of elevation(in degrees): ";
    cin>>angle;
    float height= distance*tan(angle/57.2958);
    cout<<"Height is " << height<<endl;
    return 0;

}