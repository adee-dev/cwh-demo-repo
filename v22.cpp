#include <iostream>
#include <String>

using namespace std;

class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);

    void ones_comp();
    void display();
};

void binary ::read()
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
    chk_bin();
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number! " << endl;
            exit(0);
        }
    }
}

void binary ::ones_comp()
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_comp();
    b.display();
    return 0;
}
