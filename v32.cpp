#include <iostream>

using namespace std;

class Simple
{

    int num1, num2, num3;

public:
    void show()
    {
        cout << "The value of num1, num2 amd num3 is : " << num1 << ", " << num2 << " and " << num3 << " respectively" << endl;
    }

    Simple();

    Simple(int x, int y = 2, int z = 3)
    {
        num1 = x;
        num2 = y;
        num3 = z;
        show();
    }
};

Simple ::Simple()
{

    num1 = 0;
    num2 = 0;
    num3 = 0;
    show();
}

int main()
{
    Simple o1(11, 22, 33);
    Simple o2(1);
    Simple o3;        //!?

    return 0;
}
