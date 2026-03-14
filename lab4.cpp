 #include<iostream>
 using namespace std;
 int main()
 {
    int num,digit,digittofind,count=0;
    cout<<"Enter the number: " ;
    cin>>num; 
    cout<<"Enter digit to find frequency: " ;
    cin>>digittofind;
    for( ; num>0; num=num/10 )
   {
    digit=num%10;
    if(digit==digittofind){
    count++ ;
  }
   }
   cout<<"Frequency of " <<digittofind<< "is"<< count;

 }
