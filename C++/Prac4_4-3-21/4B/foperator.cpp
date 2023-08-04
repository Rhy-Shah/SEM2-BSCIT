// Overload the operator unary(-) for demonstrating operatoroverloading using friend function.
#include<iostream>

class optr
{
private:
    int a, b;
public:
    optr(){ a=0, b=0; }
    optr(int x, int y){ a=x, b=y; }
    friend void operator-(optr &in);
    void print(){
        std::cout << "A = " << a << std::endl;
        std::cout << "B = " << b << std::endl;
    }
    ~optr(){}
};

void operator-(optr &in){
        in.a = -in.a, in.b = -in.b;
}


int main(){
    optr one(11,-32);
    std::cout << "Before using '-' operator:" << std::endl;
    one.print();
    -(one);
    std::cout << "After using '-' operator:" << std::endl;
    one.print();

    return 0;
}