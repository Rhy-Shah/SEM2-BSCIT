// Implement Virtual Base Class 
#include <iostream>

using std::cout;
using std::endl;
//------------(Grand Parent) Student class----------------------
class student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number(void)
    {
        cout << "Roll No: " << roll_number << endl;
    }
};
// ----------(Parent) Test Class------------------
class test : virtual public student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks(void)
    {
        cout << "Marks Obtained: " << endl
             << "Part1 = " << part1 << endl
             << "Part2 = " << part2 << endl;
    }
};
// ----------(Parent) Sports Class------------------
class sports : public virtual student
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score(void)
    {
        cout << "Sports wt: " << score << endl;
    }
};
// ----------(Child) Result Class------------------
class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = part1 + part2 + score;

        put_number();
        put_marks();
        put_score();

        cout << "Total Score: " << total << endl;
    }
};
//-----Main Program-----------
int main()
{
    result student_1;
    student_1.get_number(26);
    student_1.get_marks(98, 90.0);
    student_1.get_score(80.0);
    student_1.display();

    return 0;
}
