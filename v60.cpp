# include <iostream>
# include <fstream>

using namespace std;

//fstreambase --> ofstream and ifstream

int main()
{	
    string st = "Hello, world!!";
    string st2;
    //Opening file using constructor and writing it
    ofstream out("demo1.txt");       //write operation
    out<<st;
    out.close();

    //Opening file using constructor and reading it
    ifstream in("demo2.txt");        //read operation
    // in>>st2;
    getline(in, st2);
    cout<<st2;

    in.close();
    return 0;
}