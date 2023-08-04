// Implement the concept of method overriding.
#include<iostream>

using std::cout;
using std::endl;

class Base
{
public:
    Base(){}
    ~Base(){}
    void print(){
        cout << "Base Function"<<endl;
    }
};

class Derived: public Base
{
public:
    Derived(){}
    ~Derived(){}
    void print(){
        cout << "Derived Function"<<endl;
    }
};

int main(){
    Derived D1;
    D1.print();
    return 0;
}