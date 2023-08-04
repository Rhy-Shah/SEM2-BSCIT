#include<iostream>

// class to store items
class items
{
private:
    // no. of items in inventory
    int number;
    // price of each item
    float cost;
public:
    // function to record data
    void getData(int x, float y)
    {
        number = x;
        cost = y;
    }
    // function prototype
    void printData(void);
};
// function to print data
void items::printData(void)
{
    std::cout << "the number of items is: " << number <<"\n";
    std::cout << "the cost of each item is: " << cost <<"\n";
}

int main()
{
    // initializing first item
    items mobile;
    std::cout << "\nObject one >>\n";
    // add data to inventory
    mobile.getData(10011, 2899.95);
    // print the current data in inventory
    mobile.printData();
    // initializing second item
    items computer;
    std::cout << "\nObject Two >>\n";
    // add data to inventory
    computer.getData(20011, 1575.50);
    // print the current data in inventory
    computer.printData();

    return 0;
}
