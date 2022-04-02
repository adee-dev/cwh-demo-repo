# include <iostream>

using namespace std;

class complex{
    int a, b;
    public:

    complex(void);

    void printNum(){
        cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(void){
    a=2;
    b=4;
}

int main()
{	
    complex c;
    c.printNum();


    return 0;
}