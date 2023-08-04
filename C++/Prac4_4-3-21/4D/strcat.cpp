/*
    Overload the + for concatenating the two strings. 
    For e.g “Py” +“thon” =Python
*/
#include<iostream>
#include<string.h>

using std::cout;
using std::cin;

class str
{
private:
    char c1[30];
public:
    str(){ }
    void getstr(){
        cout << "enter the string: ";
        cin >> c1;
    }
    str operator+(str y)
    {
        str result;
        strcpy(result.c1, c1);
        strcat(result.c1, y.c1);

        return result;
    }
    void disp(){
        cout << c1;
    }
    ~str(){ 
    }
};

int main()
{
    str sent1, sent2, sent3;
    cout << "for sentence 1>> \n";
    sent1.getstr();
    cout << "for sentence 2>> \n";
    sent2.getstr();
    sent3 = sent1+sent2;

    cout<<"The result is:";
    sent3.disp();
    return 0;
}