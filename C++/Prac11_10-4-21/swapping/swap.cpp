// Using function template implement swapping of two variable using different data type.
#include<iostream>

using std::cout;

template<class num>void swap(num a, num b){
    cout << "The unswapped numbers are: "<< a <<", "<<b<<"\n";
    num c = a;
    a = b;
    b = c;
    cout << "The swapped numbers are: "<< a <<", "<<b<<"\n\n";
}

template<class num1, class num2>void swap(num1 a, num2 b){
    cout << "The unswapped numbers are: "<< a <<", "<<b<<"\n";
    num2 c = a;
    a = b;
    b = c;
    cout << "The swapped numbers are: "<< a <<", "<<b<<"\n\n";
}

int main(){
    int i = 1, j =2;
    float x = 2.78, y = 3.14;
    swap(i, j);
    swap(x, y);
    swap(i, x);

    return  0; 
}