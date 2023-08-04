// Overload the operator unary(-) for demonstrating operatoroverloading
#include<iostream>

class optr
{
private:
    int a, b;
public:
    optr(int x, int y){ a=x, b=y; }
    void operator-(){
        a=-a, b=-b;
    }
    void print(){
        std::cout << "A = " << a << std::endl;
        std::cout << "B = " << b << std::endl;
    }
    ~optr(){}
};

int main(){
    optr one(11,-32);
    std::cout << "Before using '-' operator:" << std::endl;
    one.print();
    -one;
    std::cout << "After using '-' operator:" << std::endl;
    one.print();

    return 0;
}