// Console formatting functions.
#include<iostream>
#include<iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1;
    float f1;

    cout << "Enter a float >> ";
    cin >> f1;

    cout<< "Enter a string>>";
    cin >> std::setw(5)>> s1;

    cout << "The number you entered with 1 digit after decimal is: "<< std::fixed << std::setprecision(1) <<f1<<endl;
    cout << "The enter string is: "<<s1;
    return 0;
}