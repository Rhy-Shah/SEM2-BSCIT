#include<iostream>
#include<fstream>

using std::fstream;
using std::cout;
using std::ios;

int main()
{
    fstream obj2;
    obj2.open("test.txt",ios::in|ios::out);
    cout<<"The first location in the file: "<<obj2.tellp()<<"\n";
    char c;

    while(obj2)
    {
        c = obj2.get();
        if(c == 'e')
        {
            obj2.seekp(-1, ios::cur);
            obj2.put('X');
        }
    }
    obj2.close();
    obj2.open("test.txt",ios::in);
    while(obj2.eof())
    {
        c = obj2.get();
        cout << c;
    }
    obj2.close();
    return 0;
}
