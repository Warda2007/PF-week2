#include <iostream>
#include <cmath>
using namespace std;
float calculatediscriminant(float a, float b, float c)
{
    float D = (b * b - 4 * a * c);
    return D;
}
void findroots(float a, float b, float c)
{
    float D = calculatediscriminant(a, b, c);
    if ( D>0)
    {
        float root1= (-b + sqrt(D)) /2*a;
        float root2 = (-b - sqrt(D)) /2*a;

         cout << "Two real and distinct roots:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (D == 0)
    {
        float root = -b / (2 * a);

        cout << "One real repeated root:" << endl;
        cout << "Root = " << root << endl;
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-D) / (2 * a);

        cout << "Complex roots:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

}


int main()
{
    float a, b, c;
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter the value of c:";
    cin >> c;

    if (a == 0)
    {
        cout << "Not a quadratic equation!" << endl;
    }
    else
    {
        findroots(a, b, c);
    }

}