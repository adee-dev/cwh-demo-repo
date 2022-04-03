// #include <iostream>

// using namespace std;

// class complex
// {
//     int a, b;

// public:
//     complex(int, int);

//     void printNum()
//     {
//         cout << "Your number is : " << a << " + " << b << "i" << endl;
//     }
// };

// complex ::complex(int x, int y)
// {
//     a = x;
//     b = y;
// }

// int main()
// {
//     complex a(1, 2);           // Implicit call
//     complex b = complex(3, 4); // Explicit call

//     a.printNum();
//     b.printNum();

//     return 0;
// }

#include <iostream>
#include <math.h>

using namespace std;

class Point
{

    int x, y;
    static int count;
    friend int dist(Point p, Point q);

    void show()
    {

        cout << "Your given point number "<<count+1<<"  is : (" << x << "," << y << ")" << endl;
        count++;

    }

   

public:
    void point(int a, int b)
    {

        x = a;
        y = b;
        show();
        
    }
    

};

int Point :: count;

int dist(Point p, Point q){

    int c = ((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
    
    cout<<"Distance between given points is : "<<sqrt(c)<<endl;

}

int main()
{
    Point p;
    p.point(0, 0);

    Point q;
    q.point(0,4);

    dist(p,q);
    return 0;
}
