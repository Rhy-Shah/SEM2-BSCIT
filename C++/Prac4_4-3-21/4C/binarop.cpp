/* 
    Overload the operator + for adding 
    the timings of two clocks, And also 
    pass objects as an argument.
*/
#include<iostream>
#include<math.h>

class clock
{
private:
    float hours, minutes;
public:
    clock(){};
    clock(float x, float y){ hours = x; minutes = y; }
    clock operator+(clock t1)
    {
        float temp;
        clock result;
        result.minutes = minutes + t1.minutes;
        temp = result.minutes;
        result.minutes = fmod(result.minutes, 60);
        result.hours = hours + t1.hours + floor(temp/60);
        return result;
    }
    void disp(){
        std::cout << "The time is: " << hours <<":"<< minutes;
    }
    ~clock(){}
};

int main()
{
    float x, y;
    std::cout << "Enter the hours in 1st clock >>";
    std::cin >> x;
    std::cout << "Enter the mins in 1st clock >>";
    std::cin >> y;
    clock c1(x, y);
    std::cout << "Enter the hours in 2nd clock >>";
    std::cin >> x;
    std::cout << "Enter the mins in 2nd clock >>";
    std::cin >> y;
    clock c2(x, y);

    clock sum = c1 + c2;
    std::cout << "The sum is: " << std::endl;
    sum.disp();

}