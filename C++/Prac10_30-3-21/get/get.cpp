#include<iostream>
#include<fstream>

using std::fstream;
using std::cout;
using std::ios;

int main()
{
    fstream obj1;
    obj1.open("test.txt", ios::out);
    obj1<<"U"<<"\n";
    obj1<<"30"<<"\n";
    obj1<<"5642.22"<<"\n";
    obj1<<"Hello World"<<"\n";
    obj1<<"Keep smiling"<<"\n";
    obj1.close();

    fstream obj2;
    obj2.open("test.txt",ios::in);
    cout<<"The first location in the file: "<<obj2.tellg()<<"\n";
    char ch;

    cout<<"\nReading the content of file: \n";
    while(obj2)
    {
        ch=obj2.get();
        cout<<ch;
    }
    obj2.clear();
    cout << "\nseek position\n";
    obj2.seekg(-9, ios::end);
    while(obj2)
    {
        ch=obj2.get();
        cout<<ch;
    }
    obj2.close();

    return 0;
}
