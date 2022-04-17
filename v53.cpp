#include <iostream>

using namespace std;

class A
{
    int a;

public:
    // A &setData(int a)        // Returns an object
    // {
    //     this->a = a;
    //     return *this;
    // }

    // void getData()
    // {
    //     cout << "Value of a is : " << a << endl;
    // }

    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "Value of a is : " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4);
    // a.setData(4).getData();
    a.getData();

    return 0;
}