// String operations for string reverse, string comparison
#include<iostream>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;

int main()
{
    string A, B;
    cout << "Enter a string: ";
    getline(cin, A);
    cout << "Enter another string: ";
    getline(cin, B);

    cout << "Reverse of string 1 is: "<< string(A.rbegin(), A.rend())<<endl;
    cout << "Reverse of string 2 is: "<< string(B.rbegin(), B.rend())<<endl;

    if((A.compare(B)) < 0) 
        cout << B << " is smaller than " << A << endl; 
    else if (A.compare(B) > 0)
        cout << A << " is smaller than " << B << endl;
    else if(A.compare((B)) == 0)
        cout << "Strings match "; 

    return 0;

}