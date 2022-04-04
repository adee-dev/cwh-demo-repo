# include <iostream>

using namespace std;

class Number{

    int a;
    public:
        Number(){
            a=100;
        }
        Number(int x){
            a=x;
            // show();
        }

        Number(Number &x){
            cout<<"!!!------------------ Copy constructor called --------------------!!!"<<endl;
            a=x.a;
            show();
        }

        void show(){
            cout<<"The number for this obect is : "<<a<<endl;
        }
};

int main()
{	
    Number n1(3);
    n1.show();

    Number n2;
    n2.show();

    Number n3(n1);         //Invoke copy constructor if object is not assigned 
   // n3.show();

    Number n4 = n2;      //Invoke copy constructor
    
    return 0;
}