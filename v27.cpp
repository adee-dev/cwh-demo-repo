#include <iostream>

using namespace std;

// Forward decleration
class complex;

class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{

    int a, b;
    // individually declearing functions as friend
    // friend int calculator :: sumRealComplex(complex, complex);
    // friend int calculator :: sumCompComplex(complex, complex);

    // Aliter :
    friend class calculator;

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

// complex sumComplex(complex o1, complex o2)
// {
//     complex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
//     return o3;
// }

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setNumber(2, 6);
    c1.printNumber();

    c2.setNumber(1, 5);
    c2.printNumber();

    calculator calc;
    int res=calc.sumRealComplex(c1,c2);
    int resc=calc.sumCompComplex(c1,c2);
    cout<<"Sum of real part of given complex numbers is : "<<res<<endl;
    cout<<"Sum of complex part of given complex numbers is : "<<resc<<endl;

    return 0;
}
