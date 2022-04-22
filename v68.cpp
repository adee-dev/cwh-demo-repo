#include <iostream>

using namespace std;

template <class T>
class Aditya
{
public:
    T data;
    Aditya(T a)
    {
        data = a;
    }

    void show();
};

template <class T>
void Aditya<T>::show()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first func " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatiesd func " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatiesd func " << a << endl;
}

int main()
{
    // Aditya<float> a(1.1);
    // cout<<a.data<<endl;
    // a.show();

    func(5); // highest priority to exact match
    func1(5);

    return 0;
}