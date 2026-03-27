#include<iostream>
using namespace std;
main()
{
    int quater,dimes,nickles,pennies;
    float bill;
    cout<<"Enter coins (quater,dimes,nickles,pennies): " ;
    cin>>quater>>dimes>>nickles>>pennies;
    cout<<"Enter the bill amount: ";
    cin>>bill;
    int total=quater*25+ dimes*10+ nickles*5+ pennies;
    int billcents= bill*100;
    if(total>=billcents){
        cout<<"yes you can pay the bill.";
    }else{
        cout<<"you cannot pay the bill."<<endl;
    }
} 