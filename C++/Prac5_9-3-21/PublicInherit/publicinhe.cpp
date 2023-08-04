// Design a class for single level inheritance using public derivation.
#include<iostream>

using std::cout;
using std::endl;
//-----------Class Definations-------------------
class One
{
private:
    int membOnePr;
public:
    int membOnePb;
    One() { }
    void initializeBothMembOfOne();
    int getMembOnePr();
    void showMembOnePr();
    ~One(){ }
};

class Two: public One
{
private:
    int membTwoPr;
public:
    Two(){ }
    void multi();
    void disp();
    ~Two(){ }
};
//----------------Class One functions------------------
void One::initializeBothMembOfOne()
{
    membOnePr = 5, membOnePb = 10;
}
int One::getMembOnePr()
{
    return membOnePr;
}
void One::showMembOnePr()
{
    cout << "Private member of Class One is: "<<membOnePr<<endl;
}
//------------------Class Two functions---------------------
void Two::multi()
{
    membTwoPr = membOnePb * getMembOnePr();
}
void Two::disp()
{
    showMembOnePr();
    cout << "Public member of Class One is: "<<membOnePb<<endl;
    cout << "Private member of Class Two is: "<<membTwoPr<<endl;
}
//------------------Main Declaration--------------------------
int main()
{
    Two two;
    two.initializeBothMembOfOne();
    two.multi();
    two.showMembOnePr();
    two.disp();

    two.membOnePb = 20;
    two.multi();
    two.disp();

    return 0;
}