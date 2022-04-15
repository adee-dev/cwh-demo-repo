#include <iostream>

using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "The id of item is : " << id << endl;
        cout << "The price of item is : " << price << endl;
        cout << endl;
    }
};

int main()
{
    int size = 3;
    // int *ptr = &size;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item : " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q)
        ptr->setData(p, q);
        ptr++;
        cout << endl;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item info of item : " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}