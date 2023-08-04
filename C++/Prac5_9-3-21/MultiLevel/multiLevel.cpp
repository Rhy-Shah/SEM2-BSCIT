// Design a class for multilevel inheritance.
#include<iostream>

using std::cout;
using std::endl;
//------------------Employee Class------------------
class employee
{
protected:
    int employeeNo;
public:
    employee(){ }
    void initializeENO(int x){
        employeeNo = x;
    }
    void printENO(){
        cout << "The Employee Number is: " << employeeNo <<endl;
    }
    ~employee(){ }
};
//------------Manager Class(Level 1)-----------------
class manager: public employee
{
protected:
    float salaryRate;
    int workHours;
public:
    manager(){ }
    void initializeMGER(float x, int y){
        salaryRate = x;
        workHours = y;
    }
    void printMGER(){
        cout << "Salary rate per hour is: " << salaryRate <<endl;
        cout << "Work hour for manager is: " << workHours <<endl;
    }
    ~manager(){ }
};
//-------------Total Class(Level 3)---------------------
class TotalSal: public manager
{
protected:
    float total;
public:
    TotalSal(){ }
    void printTTL(){
        total = salaryRate * workHours *22.5;
        printENO();
        printMGER();
        cout << "Salary of the Manager is(in USD): " << total <<"/month.";
    }
    ~TotalSal(){ }
};
//---------------Main Program------------------------------
int main()
{
    TotalSal Manager1;
    Manager1.initializeENO(1);
    Manager1.initializeMGER(17.5, 8);

    Manager1.printTTL();
    return 0;
}