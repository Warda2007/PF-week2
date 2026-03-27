#include <iostream>
using namespace std;
main()
{
    int count;
    cout << "How many values you want to enter: ";
    cin >> count;
    int number[count];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter the number: ";
        cin >> number[i];
    }
    for (int i = 0; i < count; i++)
        cout << "The numbers are: " << number[i]<<endl ;
}
