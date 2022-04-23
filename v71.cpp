#include <iostream>
#include <vector>

using namespace std;

template<class T>
void display(vector<T> &v)
{   
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> vec1;       //zero length vector
    int element, size;
    // cout << "ENter the size of vector : ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the element : ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back();

    // display(vec1);
    // cout<<endl;
    // vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 3, 1);
    // display(vec1);

    vector<char> vec2(4);  //4 element character vector
    vec2.push_back('5');
    display(vec2);
    vector<char> vec3(vec2);    //4 element character vector from vector 2
    display(vec3);
    vector<int> vec4(10,4);   //10 element vector of 4's
    display(vec4);
    cout<<vec4.size();

    return 0;
}