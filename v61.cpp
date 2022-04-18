#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("demo1.txt");
    string name;
    cout << "Enter your name : ";
    cin >> name;

    out <<name+" is my name";
    out.close();

    ifstream in("demo1.txt");
    string content;
    in>>content;
    cout<<"The content of the file is : "<<content;

    in.close();
    return 0;
}