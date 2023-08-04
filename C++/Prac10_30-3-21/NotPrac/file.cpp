#include<iostream>
#include<fstream>

using std::ofstream;

int main(){
    ofstream file;
    file.open("country");

    file << "Hello I This is a test file\n";
    file << "This is row 2 and there are total seventeen words.";

    file.close();
    return 0;
}