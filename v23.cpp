#include <iostream>

using namespace std;

class shop
{
private:
    int itemID[100];
    int itemPrice[100];
    int counter;
    int it_no;

public:
    void getPrice();
    void setPrice();
};

void shop ::setPrice()
{
    cout << "How many items do you want to store? : " << endl;
    cin >> it_no;
    while (it_no != 0)
    {
        cout << "Enter id of the " << (counter + 1) << " item : ";
        cin >> itemID[counter];
        cout << "Enter price of the " << (counter + 1) << " item : ";
        cin >> itemPrice[counter];
        it_no = it_no - 1;
        counter = counter + 1;
    }
}

void shop ::getPrice()
{

    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop helo;
    helo.setPrice();
    helo.getPrice();
    return 0;
}
