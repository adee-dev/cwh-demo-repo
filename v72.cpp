#include <iostream>
#include <list>

using namespace std;

void display(list<int> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> li_1; // list of 0 length
    li_1.push_back(2);
    li_1.push_back(3);
    li_1.push_back(4);
    li_1.push_back(5);
    li_1.push_back(6);

    display(li_1);

    list<int> li_2(4); // list of size 4
    list<int>::iterator iter;
    iter = li_2.begin();
    *iter = 6;
    iter++;
    *iter = 7;
    iter++;
    *iter = 8;
    iter++;
    *iter = 9;
    iter++;

    display(li_2);

    return 0;
}