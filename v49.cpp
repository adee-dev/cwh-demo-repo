#include <iostream>

using namespace std;

class Test
{
    int a, b;

public:
    Test(int i, int j)
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(a+j), a(i)
    // Test(int i, int j) : b(j), a(i+b)       //--> Red flag Garbage value
    {
        a = i;
        b = j;
        cout << "Constructor executed." << endl;
        cout << "Value of a is : " << a << endl;
        cout << "Value of b is : " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}