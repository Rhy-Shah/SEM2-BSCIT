//B. Implement Constructors in Derived Class
#include <iostream>

using std::endl;
using std::cout;
//------------------Alpha class-----------------------
class alpha
{
private:
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "----- Alpha Is Now Initialized -----" << endl;
    }
    void show_x()
    {
        cout << "x = " << x << endl;
    }
};
//------------------Beta class-----------------------
class beta
{
private:
    float y;

public:
    beta(float j)
    {
        y = j;
        cout << "----- Beta Is Now Initialized -----" << endl;
    }
    void show_y()
    {
        cout << "y = " << y << endl;
    }
};
//------------------Gamma class-----------------------
class gamma : public beta, public alpha
{
private:
    int m, n;

public:
    gamma(int a, float b, int c, int d) : beta(b), alpha(a) 
    {
        m = c;
        n = d;
        cout << "----- Gamma Is Now Initialized -----"<< endl;
    }
    void show_mn()
    {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};
//------------------Main Program-----------------------
int main()
{
    gamma g(5, 10.75, 20, 30);
    cout << "Data >> " << endl;
    g.show_x();
    g.show_y();
    g.show_mn();
    return 0;
}
