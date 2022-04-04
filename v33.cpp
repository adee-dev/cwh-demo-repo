# include <iostream>

using namespace std;

class BankDeposit{

    int principle, years;
    float intrest_rate, return_value;

    public:
        BankDeposit(){};
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){

    principle=p;
    years=y;
    intrest_rate=r;
    return_value=principle;
    for (int i = 0; i < years; i++)
    {
        return_value=return_value*(1+intrest_rate);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int R){

    principle=p;
    years=y;
    intrest_rate=((R)*0.01);
    return_value=principle;
    for (int i = 0; i < years; i++)
    {
        return_value=return_value*(1+intrest_rate);
    }
    cout<<intrest_rate;
}

void BankDeposit :: show(){

    cout<<endl<<"Principle value was "<<principle<<". Return value after "<<years<<" years is "<<return_value<<endl;
}

int main()
{	
    BankDeposit bd1, bd2, bd3;
    int p,y,R;
    float r;

    cout<<"Enter the values of p, y and r respectively : ";
    cin>>p>>y>>r;

    bd1=BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter the values of p, y and R respectively : ";
    cin>>p>>y>>R;

    bd2=BankDeposit(p,y,R);
    bd2.show();

    return 0;
}