#include<iostream>
using namespace std;
main()
{
    int price;
    float discount;
    float finalbill;
    cout<<"Enter the price: " ;
    cin>>price;
    if(price<=5000){
        discount = price*0.05;
        finalbill = price - (price*0.05);
        cout<<"The discounted price is:"<<finalbill;
    }if(price>5000){
      discount = price*10/100;
      finalbill = price - (price*10/100);
      cout<<"The discounted price is:"<<finalbill ; 
    }

}