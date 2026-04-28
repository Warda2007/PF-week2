#include<iostream>
using namespace std;
bool isSymmetrical(int num)
{
    int original=num;
    int digit1= num%10;
    num=num/10;

    int digit2= num%10;
    num=num/10;

    int digit3= num%10;
    int reverse= digit1*100+ digit2*10 + digit3;
    if(original==reverse)
    return true;
    else{
        return false;
    }
}

int main(){
    cout<<"Enter 3 digit number:";
    int num;
    cin>>num;
    if(isSymmetrical(num)){
        cout<< num  << "is symmetrical";
    }
    else{
        cout<< num    << "is not symmetrical";
    }
}

