/*
    d. Design a class StaticDemo to show the 
    implementation of static variable and static function
*/
#include<iostream>

using std::cout;

class StaticDemo
{
private:
    float l, b, h;
    static int countObj;
public:
    StaticDemo(){ l=2,b=4,h=5.3; countObj++;};
    ~StaticDemo();
    static int getCount() {
        return countObj;
    }
};

int StaticDemo::countObj = 0;

int main()
{
    cout << "Count before obj: " << StaticDemo::getCount()<<std::endl;
    StaticDemo a;
    cout << "Count after 1 obj: " << StaticDemo::getCount()<<std::endl;
    StaticDemo b;
    cout << "Count after 2 obj: " << StaticDemo::getCount()<<std::endl;
}

StaticDemo::~StaticDemo()
{
}
