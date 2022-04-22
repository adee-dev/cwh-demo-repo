# include <iostream>

using namespace std;

template <class T1, class T2>
class myCLass{
     public:
        T1 data1;
        T2 data2;

        myCLass(T1 a, T2 b){
            data1 = a;
            data2 = b;
            show();
        }

        void show(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
 };

int main()
{	
    myCLass<int, char> obj(1,'a');
    // obj.show();

    return 0;
}