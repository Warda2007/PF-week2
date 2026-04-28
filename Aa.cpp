#include <iostream>
#include <string>
using namespace std;
char capsmall(char alphabet)
{
    char letter = alphabet;
    if (letter >= 'a' && letter <= 'z')
    {
        cout << "You entered small " << letter;
    }
    if (letter >= 'A' && letter <= 'Z')
    {
        cout << "You entered capital " << letter;
    }
    return letter;
}
main()
{
    char letter;
    cout << "Enter alphabet(A/a):";
    cin >> letter;
    capsmall(letter);
}