/*
    Write a program to demonstrate function 
    definition outside class and accessing 
    class members in function definition.
*/
#include<iostream>

class numbers
{
private:
    int num1, num2;
public:
    numbers(int x, int y);
    numbers(int x);
    int addMemb();
    ~numbers();
};

int main()
{
    int i, j;
    std::cout << "Enter two numbers :";
    std::cin >> i >> j;
    numbers A(i, j);
    std::cout << "The addition of "<<i << " " << j <<" is :"  << A.addMemb()<<std::endl;
}

numbers::numbers(int x, int y)
{
    num1 = x;
    num2 = y;
}

int numbers::addMemb()
{
    return num1+num2;
}

numbers::~numbers()
{
}