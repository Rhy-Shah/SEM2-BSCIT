#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b;
    cout << "Enter Values Of A And B \n";
    cin >> a;
    cin >> b;
    int x = a - b;
    try
    {
        throw(x); //throws an object
    }
    catch (int i) //Catches Exception
    {
        cout << "Exception Caught: x = " << x << "\n";
    }
    cout << "END";
}