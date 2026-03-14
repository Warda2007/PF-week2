 #include<iostream>
 using namespace std;
 int main()
 {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int count=0;
    if(num==0) count=1;
    while(num!=0)
    {
        num=num/10;
        count++ ;
    }
    cout<<"Total digits are "<<count<<endl;
 }