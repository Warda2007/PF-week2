#include <iostream>
#include <string>
using namespace std;
main()
{
    int n;
    cout << "Enter the number of products: ";
    cin >> n;
    cin.ignore();

    string productname[n];
    double price[n];
    int quantity[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of product " << i + 1;
        getline(cin, productname[i]);
        cout << "Enter the price of " << productname[i];
        cin >> price[i];
        cout << "Enter the quantity of " << productname[i];
        cin >> quantity[i];
    }
        cout << "     PRODUCT DETAILS    "<<endl;
        for (int i = 0; i < n; i++){
        double totalprice = price[i] * quantity[i];
            cout << productname[i] << ":" << "$ " << price[i] << "," << quantity[i] << "in stock," << "total value:" << totalprice << endl;
        }    
    
}