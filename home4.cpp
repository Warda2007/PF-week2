#include<iostream>
using namespace std;
int main()
{
    float price1,price2,price3;
    int r1,r2,r3;
price1=2.00 ;
price2=4.10 ;
price3=2.50 ;
cout<<"Enter the number of red roses:";
cin>>r1;
cout<<"Enter the number of white roses:" ;
cin>>r2;
cout<<"Enter the number of tulips:" ;
cin>>r3;
float totalprice,discount,finalprice;
totalprice=(r1*price1)+(r2*price2)+(r3*price3) ;
if(totalprice>200){
discount=totalprice*0.2 ;
finalprice=totalprice-discount;
cout<<"original price is:"<<totalprice<<endl;
cout<<"price after discount is:"<<finalprice<<endl;
}else{
    cout<<"original price is:"<<totalprice;
}
return 0;


}