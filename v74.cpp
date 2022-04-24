#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // Function Object(Functor)

    int arr[] = {8, 9, 5, 2, 6, 3, 7, 1, 4};
    sort(arr, arr + 9);
    sort(arr, arr + 9, greater<int>());
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0; 
}