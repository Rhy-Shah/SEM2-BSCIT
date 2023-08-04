#include<iostream>
#include<fstream>

using std::cout;
using std::fstream;
using std::ios;
using std::string;
using std::getline;

int main(){

    fstream obj1, obj2;

    obj1.open("keys.txt", ios::out);
    obj2.open("values.txt", ios::out);

    string keys[6] = {"key1", "key2", "key3", "key4", "key5", "key6"};
    string values[6] = {"value1", "value2", "value3", "value4", "value5", "value6"};

    for (int i = 0; i < 6; i++){
        obj1 << keys[i] << "\n";
        obj2 << values[i] << "\n"; 
    }
    
    obj1.close();
    obj2.close();

    obj1.open("keys.txt", ios::in|ios::out);
    obj2.open("values.txt", ios::in|ios::out);

    string temp1, temp2;
    int count = 0;
    while (count < 6){
        getline(obj1, temp1);
        getline(obj2, temp2);

        cout << temp1 <<" : "<< temp2 <<"\n";
        count++;
    }   

    obj1.close();
    obj2.close();

    return 0;
}