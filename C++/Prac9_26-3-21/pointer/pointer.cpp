#include<iostream>

using std::cout;
using std::endl;

void fun(int *ptr, int x){
    if (ptr == NULL){
        throw ptr;
    }
    if (x == 0){
        throw x;
    }
}

int main(){
    try{
        int *y, x;
        y = &x;
        fun(y, 0);
    }catch(...){
        cout << "Caught Exception from fun()\n";
    }
    cout << "End of program";
    return 0;
}