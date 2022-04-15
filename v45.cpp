#include <iostream>

using namespace std;

class Student
{

protected:
    int roll_no;

public:
    void set_roll_no(int a)
    {
        roll_no = a;
        print_roll_no();
    }

    void print_roll_no()
    {
        cout << "Your roll number is : " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
        print_marks();
    }

    void print_marks()
    {
        cout << "Your result is here : " << endl
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl;
    }
};

class Sports : virtual public Student
{

protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
        get_score();
    }

    void get_score()
    {
        cout << "Your PT score is : " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        cout << "Your total score(out of 300) is : " << total << endl;
    }
};

int main()
{
    Result res;
    res.set_roll_no(10);
    res.set_marks(80.0, 90.0);
    res.set_score(90.0);
    res.display();

    return 0;
}