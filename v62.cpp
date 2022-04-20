# include <iostream>
# include <fstream>
# include <string>

using namespace std;

int main()
{	
    ofstream out;
    out.open("demo1.txt");
    out<<"This is line number 1\n";
    out<<"This is line number 2\n";
    out<<"This is line number 3\n";
    out<<"This is line number 4\n";
    out<<"This is line number 5\n";
    out.close();

    ifstream in;
    string st, st1, st2;
    in.open("demo1.txt");
    // in>>st1>>st2;
    // cout<<st1<<st2;

    while (in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    in.close();
    return 0;
}