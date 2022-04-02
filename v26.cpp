# include <iostream>

using namespace std;

class complex
{

    int a, b;

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    friend complex sumComplex(complex o1, complex o2);
    void printNumber()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2;
    c1.setNumber(2, 3);
    c1.printNumber();

    c2.setNumber(1, 4);
    c2.printNumber();

    sumComplex(c1, c2).printNumber();

    return 0;
}