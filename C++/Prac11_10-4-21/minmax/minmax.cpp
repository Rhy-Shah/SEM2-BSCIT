// Using Class template find the max and min of two numbers using different data type
#include<iostream>
#include<cmath>

using std::cout;
using std::cin;

template<class temp1, class temp2>
class num
{
private:
    temp1 num1;
    temp2 num2;
public:
    num(temp1 a, temp2 b){ num1 = a; num2 = b; }
    void minMax(){
        if (round(num1) > round(num2)){
            cout << num2 <<" is samller than " << num1 <<".\n"; 
        }else if (floor(num2) > floor(num1)){
            cout << num2 <<" is bigger than " << num1 <<".\n";
        }else{
            cout << "Both are equal.\n";
        }
    }
    ~num(){}
};

int main(){
    num<float, int>obj1(12.5, 7);
    num<float, float>obj2(12.4, 12.6);
    num<int, int>obj3(12, 7);
    num<int, float>obj4(7, 76.2);

    obj1.minMax();
    obj2.minMax();
    obj3.minMax();
    obj4.minMax();

    return 0;

}