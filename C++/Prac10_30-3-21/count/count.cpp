// Design a class FileDemo open a file in read mode 
// and display the total number of words and lines in the file.
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
#include<algorithm>

using std::cout;
using std::string;
using std::fstream;
using std::ios;
using std::getline;
using std::vector;
using std::stringstream;

int main(){
    int lineCount = 0, wordCount = 0;
    vector<string> row;
    string line, feild;
    fstream fileVar("test.txt", ios::in);
    while (!fileVar.eof())
    {
        row.clear();
        getline(fileVar, line);
        stringstream s(line);
        while (getline(s, feild, ' ')){
            row.push_back(feild);
        }
        wordCount += row.size();
        lineCount++;
    }
    cout << "The number of lines is "<<lineCount<<"\n";
    cout << "The number of words is "<<wordCount<<"\n";
    return 0;
}