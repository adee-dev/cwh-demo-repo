#include <iostream>

using namespace std;

template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAvg(3, 3);
    cout << "Average of given two numbers is : " << a << endl;

    int x=4, y=2;
    swapp(x,y);
    cout<<x<<endl<<y;

    return 0;
}