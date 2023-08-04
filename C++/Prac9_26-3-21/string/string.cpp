#include<iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;

int main(){
    string s;
    cout << "Enter name of course: ";
    cin >> s;
    try{
        if(s=="Bsc.IT"||s=="BMS"||s=="B.Com"){
            cout << "you have enteres course "<< s<<endl;
        }else{
            throw(s);
        }
    }catch(string test){
        cout << "You have entered a wrong course.";
    }
}