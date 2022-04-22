# include <iostream>

using namespace std;

template<class T1=int, class T2=int, class T3=char >
class Aditya{
    public:
        T1 a;
        T2 b;
        T3 c;
        Aditya(T1 x, T2 y, T3 z){
            a=x;
            b=y;
            c=z;
            show();
        }

        void show(){
            cout<<"Value of a is : "<<a<<endl;
            cout<<"Value of b is : "<<b<<endl;
            cout<<"Value of c is : "<<c<<endl;
        }
};

int main()
{	
    // Aditya<> a(1,2,'e');
    Aditya<char, int, float> a('q',2,3.4);
    
    return 0;
}