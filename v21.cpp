#include <iostream>

using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "value of a " << a << endl;

        cout << "value of b " << b << endl;

cout << "value of c " << c << endl;

cout << "value of d " << d << endl;

cout << "value of e " << e << endl;
    };
};


void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee adee;
    adee.d = 4;
    adee.e = 3;
    adee.setData(1, 2, 3);
    adee.getData();
    return 0;
}