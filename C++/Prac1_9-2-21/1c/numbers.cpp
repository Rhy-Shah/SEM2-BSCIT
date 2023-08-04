#include<iostream>
#include<cmath>

using namespace std;
// a class to store all the numbers and perform actions on them
class numbers
{
private:
    // variable to store the number
    int number;
    // function to get number and store in the number variable
    void readno()
    {
        // get input
        cout << "Please enter a number >> ";
        cin >> number;
    }
public:
    // method to calculate factorial
    void factorial();
    // method to find reverse of a number
    int reverseNo();
    // method to check if a number is palindrome or not
    void isPalindrome();
    // method to check if a number is armstrong or not
    void isArmstrong();
};

int main()
{
    // create a class member
    numbers first;
    // calculate factorial
    first.factorial();
    // calculate reverse of number
    cout << "For reverse number: ";
    int revNum = first.reverseNo();
    cout << "The reverse of the number is " << revNum << ".\n";
    // check and print if a number is palindrome or not
    first.isPalindrome();
    // check and print if a number is armstrong or not
    first.isArmstrong();

    return 0;
}

void numbers::factorial()
{
    cout << "For factorial: ";
    // get the number
    readno();
    // create a copy of the number and initialize the required variables
    int temp = number, ans = 1;
    // calculate
    while(temp > 1)
    {
        ans *= temp;
        temp--;
    }
    // print
    cout << "The factoial is :" << ans <<"\n";
}

int numbers::reverseNo()
{
    // get the number
    readno();
    // create a copy of the number and initialize the required variables
    int num = number, temp, revNum = 0;
    // calculate
    while(num > 0)
    {
        temp = num % 10;
        revNum = revNum * 10 + temp;
        num /= 10;
    }
    /*  return the number instead of printing as
        we need to calculate reverse for palindrome*/
    return revNum;
}

void numbers::isPalindrome()
{
    cout << "For Palindrome: ";
    // get the number and calculate reverse and store the number in variable
    int revNum = reverseNo();
    // check if it is palindrome or not
    if (revNum == number)
        cout << revNum << " is a palindrome.\n";
    else
        cout << number << " is not a palindrome.\n";
}

void numbers::isArmstrong()
{
    cout << "For Armstrong: ";
    // get number
    readno();
    // create a copy of the number and initialize the required variables 
    int num = number, digit, sum = 0;
    // calculate
    while(num != 0)
    {
        digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    // check if it is armstrong or not
    if (sum == number)
        cout << sum << " is a Armstrong number.";
    else
        cout << number << " is not a Armstrong number.";
}