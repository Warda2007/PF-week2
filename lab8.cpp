#include <iostream>
using namespace std;

int main() {

    int age, toyPrice;
    double machinePrice;

    cin >> age;
    cin >> machinePrice;
    cin >> toyPrice;

    int toys = 0;
    double money = 0;
    int giftMoney = 10;
    int brotherCount = 0;

    for(int i = 1; i <= age; i++) {

        if(i % 2 == 0) {       // even birthday
            money += giftMoney;
            giftMoney += 10;
            brotherCount++;
        }
        else {                 // odd birthday
            toys++;
        }

    }

    money -= brotherCount;
    money += toys * toyPrice;

    if(money >= machinePrice)
        cout << "Yes! " << money - machinePrice;
    else
        cout << "No! " << machinePrice - money;

    return 0;
}