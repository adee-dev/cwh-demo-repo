// # include <iostream>

// using namespace std;

// class Y;
// class X{

//     int x;
//     public:
//     void setx(int a){
//         x=a;
//     }
//     friend void add(X,Y); 

// };

// class Y{

//     int y;
//     public:
//     void setx(int b){
//         y=b;
//     }
//     friend void add(X,Y);

// };

// void add(X o1, Y o2){
//     cout<<"Sum of x and y is : "<<o1.x+o2.y<<endl;
// }



// int main()
// {	
//     X o1;
//     o1.setx(1);
    
//     Y o2;
//     o2.setx(3);

//     add(o1,o2);
//     return 0;
// }

# include <iostream>

using namespace std;

class c2;

class c1{

    int v;
    friend void exchange(c1 &,c2 &);
    public:
        void setData(int a){
            v=a;
        }

        void showData(){
            cout<<v<<endl;
        }
};

class c2{

    int w;
    friend void exchange(c1 &,c2 &);
    public:
        void setData(int b){
            w=b;
        }

        void showData(){
            cout<<w<<endl;
        }
};

void exchange(c1 & x, c2 & y){
    int temp = x.v;
    x.v=y.w;
    y.w=temp;

}

int main()
{	
    c1 o1;
    c2 o2;

    o1.setData(3);
    o2.setData(1);
    exchange(o1,o2);

    cout<<"Value of c1 : ";
    o1.showData();

    cout<<"Value of c2 : ";
    o2.showData();

    return 0;
}