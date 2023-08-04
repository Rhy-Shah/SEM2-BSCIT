// Design a class for single level inheritance using private derivation.
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

class Two: private One
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
    cout << "Enter two numbers >> \n";
    std::cin >> membOnePr >> membOnePb;
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
    initializeBothMembOfOne();
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
    two.multi();
    two.disp();

    two.multi();
    two.disp();

    return 0;
}