#include <iostream>

using namespace std;

class complex
{

    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i " << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 3);
    c1.printNumber();

    c2.setData(2, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}
