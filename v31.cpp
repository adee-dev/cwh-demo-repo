#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    complex(int);
    complex();

    void printNum()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
complex ::complex(int x)
{
    a = x;
    b = 4;
}
complex ::complex()
{
    a = 5;
    b = 6;
}
int main(){
    complex o1(1,2),o2(3),o3;

    o1.printNum();
    o2.printNum();
    o3.printNum();

    return 0;
}