#include<iostream>

using std::cout;

int main(){
    int a=1;
    try
    {
        if(a == 1){
            throw('a');
        }
    }
    catch(...){
        cout<<"Error detected in all";
    }

    return 0;
}