// class to implement Hybrid Inheritance.
#include<iostream>
using std::endl;
using std::cout;
//----------------------Student Class--------------------------
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
//-----------------------Test Class----------------------------
class test : public student
{
protected:
    float part1, part2;
public:
    void get_marks(float x, float y)
    {
        part1 = x; part2 = y;
    }
    void put_marks(void)
    {
        cout << "Marks Obtained: " << endl;
        cout << "Part1 = " << part1 << endl;
        cout << "Part2 = " << part2 << endl;
    }
};
//---------------------------Sports Class----------------------
class sports
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
//-------------------Result Clasx-----------------------
class result : public test, public sports
{
    float total;
public:
    void display(void);
};

void result :: display(void)
{
    total = part1 + part2 + score;

    put_number();
    put_marks();
    put_score();

    cout << "Total Score: " << total;
}
//-----------------------Main Program-------------------------------
int main()
{
    result student_1;
    student_1.get_number(26);
    student_1.get_marks(90.5, 60.0);
    student_1.get_score(80.0);
    student_1.display();
    return 0;
}
