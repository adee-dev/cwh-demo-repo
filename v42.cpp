#include <iostream>
#include <cmath>

/*

creat 2 classes --> 1.SimpleCalculator and 2.ScientificCalculator
simple --> +,-,/,*
scientific --> sin(x), cos(x), tan(x), exp(x)
create HybridCalculator and inherit those two in it

*/

using namespace std;

class SimpleCalculator
{
    int x, y;

public:
    void sewtvalssim()
    {
        cout << "Value of x : " << endl;
        cin >> x;
        cout << "Value of y : " << endl;
        cin >> y;
        simCalc();
    }
    void simCalc()
    {
        cout << "Value of x + y is : " << x + y << endl;
        cout << "Value of x - y is : " << x - y << endl;
        cout << "Value of x * y is : " << x * y << endl;
        cout << "Value of x / y is : " << x / y << endl;
    }
};

class ScientificCalculator
{
    int x, y;

public:
    void sewtvalssci()
    {
        cout << "Value of x : " << endl;
        cin >> x;
        cout << "Value of y : " << endl;
        cin >> y;
        sciCalc();
    }
    void sciCalc()
    {
        cout << "Value of sin(x) is : " << sin(x) << endl;
        cout << "Value of coas(x) is : " << cos(x) << endl;
        cout << "Value of tan(x) is : " << tan(x) << endl;
        cout << "Value of exp(x) is : " << exp(x) << endl;
    }
};

class HybridCalculator : public ScientificCalculator, public SimpleCalculator
{
};

int main()
{
    // SimpleCalculator simcal;
    // simcal.sewtvalssim();

    // ScientificCalculator scical;
    // scical.sewtvalssci();

    HybridCalculator hcal;
    hcal.sewtvalssci();
    hcal.sewtvalssim();

    return 0;
}