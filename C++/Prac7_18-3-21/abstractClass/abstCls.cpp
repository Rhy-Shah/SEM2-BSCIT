// Show the implementation of abstract class.
#include<iostream>

using std::cout;
using std::endl;
//----------Base Class----------
class base
{
protected:
    int x;
public:
    base(int b){x = b;}
    virtual void pure() = 0;
    ~base(){}
};
//-------Derived Class-----------
class Dervied: public base
{
protected:
    int y;
public:
    Dervied(int b, int d): base(b) {y = d;}
    void pure(){
        cout << "X = "<< x <<",Y = "<< y<<endl;
    }
    ~Dervied(){}
};
//---------Main Program------------
int main()
{
    base *a;
    a = new Dervied(3, 8);

    a->pure();
    return 0;
}
