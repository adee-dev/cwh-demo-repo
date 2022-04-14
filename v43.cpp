#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "Hey, how are you?" << endl;
    }

    void say(){
        cout<<"Hi, beautiful world!"<<endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Hello, How was your day?" << endl;
    }
};

class Derived : public Base1, public Base2{
    int a;
    public:
    void greet(){
        Base1 :: greet();
    }

    // void say(){
    //     cout<<"Hihi, gorgeous world!"<<endl;         //-->Overriding say
    // }

};

int main()
{   
    Base1 b1obj;
    Base2 b2obj;
    Derived dobj;

    b1obj.greet();
    b2obj.greet();

    dobj.greet();
    dobj.say();

    return 0;
}