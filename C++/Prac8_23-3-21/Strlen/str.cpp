//String operations for string length , string concatenation
#include<iostream>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;

int main(){
    string str1;
    cout << "Enter a string: ";
    getline(cin, str1);
    string str2;
    cout << "Enter another string: ";
    getline(cin, str2);
    cout << "The length of first string you entered: "<<str1.length()<<endl;
    cout << "The length of second string you entered: "<<str2.length()<<endl;
    cout << "The concatation of the give string is>> '"<< str1 + str2<< "'"<<endl;

    return 0;
}