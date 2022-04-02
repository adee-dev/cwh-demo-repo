# include <iostream>

using namespace std;

class Employee{
    int id;
    static int count;
public:
    void setData(){
        cout<<"Enter the id : "<<endl;
        cin>>id;
        count++;

    }
    void getData(){
        cout<<"The id of employee is "<<id<<" and this is employee number "<<count<<endl;
    }

    static void getCount(){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee :: count;

int main()
{	
    Employee ram,sham,gopal;
    ram.setData();
    ram.getData();
    Employee :: getCount();

    sham.setData();
    sham.getData();
    Employee :: getCount();

    gopal.setData();
    gopal.getData();
    Employee :: getCount();

    return 0;
}
