// Design a class to implement Multiple Inheritance.
#include<iostream>
using std::endl;
using std::cout;
//---------------M Class-------------------
class M
{
protected:
    int m;
public:
    void get_m(int);
};
//---------------N Class-------------------
class N
{
protected:
    int n;
public:
    void get_n(int);
};
//--------------P Class---------------------
class P : public M, public N
{
public:
    void display(void);
};
void M :: get_m(int x)
{
    m=x;
}
void N :: get_n(int y)
{
    n=y;
}
void P :: display(void)
{
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
    cout << "m*n = " << m*n;
}
//---------Main Program------------------
int main()
{
   P p;

   p.get_m(10);
   p.get_n(20);
   p.display();

   return 0;
}
