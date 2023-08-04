#include<iostream>
#include<string>

using namespace std;
// class to manage students 
class student
{
private:
    // name of student
    string name;
    // age of student
    int age;
    // student's percentage
    float percentage;
    // function to record data
    void getData()
    {
        cout << "Enter the name of student: ";
        getline(cin, name);
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the percentage: ";
        cin >> percentage;
    }
public:
    // fucntion to print data to console
    void displayData()
        {
            // get the name, sage, percentage from user
            getData();
            std::cout << "The name is " << name <<".\n";
            std::cout << "The age is " << age <<".\n";
            std::cout << "The percentage is " << percentage <<"%.\n";
        }
};

int main()
{
    // initialize a student
    student John;
    cout << "The student one is: \n";
    // record and display data
    John.displayData();

    return 0;
}