// Write a friend function for adding the two complex numbers, using a single class
#include<iostream>

class complexNumber
{
private:
    int natural;
    int decimal;
    friend complexNumber addNum(complexNumber i, complexNumber j);
public:
    complexNumber(){
        natural = 0;
        decimal = 0;
        
    }
    void format(complexNumber X)
    {
        std::cout << "The resulting number is :" << X.natural<<"."<<X.decimal;
    }
    complexNumber(int x, int y);
    ~complexNumber();
};

int main()
{
    int i, j;
    std::cout << "Enter the natural part for first number: ";
    std::cin >> i;
    std::cout << "Enter the decimal part for first number: ";
    std::cin >> j;
    complexNumber Num1(i, j);
    std::cout << "Enter the natural part for second number: ";
    std::cin >> i;
    std::cout << "Enter the decimal part for second number: ";
    std::cin >> j;
    complexNumber Num2(i, j);
    complexNumber result;
    result.format(addNum(Num1, Num2));
}

complexNumber addNum(complexNumber i, complexNumber j)
{
    complexNumber Ans;
    Ans.natural = i.natural + j.natural;
    Ans.decimal = i.decimal + j.decimal;

    return Ans;
}

complexNumber::complexNumber(int x, int y)
{
    natural = x;
    decimal = y;
}

complexNumber::~complexNumber()
{
}
