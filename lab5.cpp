 #include<iostream>
 using namespace std;
 int main()
 {
    int n, sum=0 ;
    cout<<"Enter the number: " ;
    cin>>n;
    if(n<0) {
        n= -n;
    }
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<"Sum of digits: " <<sum<< endl;
 }