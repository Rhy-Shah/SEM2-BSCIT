/*a. Design a class complex for 
    adding the two numbers and 
    also show the use of constructor*/
#include<iostream>

class complex
{
private:
    int real;
    int imaginary;
public:
    complex(){ real=0, imaginary=0;}
    complex(int , int);
    friend void disp_sum(complex, complex);
    ~complex();
};

int main()
{
    int x, y;
    std::cout << "Enter the imaginary of 1st real: ";
    std::cin >> x;
    std::cout << "Enter the imaginary of 1st imaginary: ";
    std::cin >> y;

    complex var1(x, y);

    std::cout << "Enter the imaginary of 2nd real: ";
    std::cin >> x;
    std::cout << "Enter the imaginary of 2nd imaginary: ";
    std::cin >> y;

    complex var2(x, y);
    disp_sum(var1, var2);
    return 0;
}

void disp_sum(complex a, complex b)
{
    std::cout << "The sum is >> " 
    << a.real + b.real<< "+" 
    <<a.imaginary+b.imaginary<<"i"<<std::endl;
}

complex::complex(int x, int y)
{
    real = x;
    imaginary = y;
}

complex::~complex()
{
}
