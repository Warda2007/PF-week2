 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter the length of sequence you want to print: ";
    cin>>n;
int a=0, b=1, next;
for(int i=0; i<n; i++)
{
    cout<<a<<" ";
    next=a+b;
    a=b;
    b=next;
}
 }