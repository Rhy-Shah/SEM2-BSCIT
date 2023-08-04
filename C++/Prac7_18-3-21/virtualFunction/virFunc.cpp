// Show the use of virtualfunction
#include<iostream>

using std::cout;
using std::endl;

class A
{
private:
    int x = 5;
public:
    A(){}
    virtual void display(){
        cout << "Value of x is: " << x <<endl;
    }
    ~A(){}
};
class B: public A
{
private:
    int y = 10;
public:
    B(){}
    void display(){
        cout << "Value of y is: " << y <<endl;
    }
    ~B(){}
};

int main(){
    A *a;
    A a1;

    a = new B;
    a->display();
    a1.display();
    return 0;
}
