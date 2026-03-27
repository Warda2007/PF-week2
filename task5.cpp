#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the number of elemets: ";
    cin >> n;
    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        bool found = false;
        for (int j = 0; j < count; j++)
        {
            if (arr[j] == num)
            {
                found = true;
                break;
            }
        }
        if (found)        {
            cout << "Already Entered" << endl;
        }
        else
        {
            arr[count++] = num;
        }
    }
    cout<<"Unique numbers ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
        
    }
    cout<<endl;
    return 0;
}