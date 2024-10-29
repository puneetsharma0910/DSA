#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[50];
    int size;
    cout << "Enter the no. of Elements of array" << endl;

    cin >> size;
    for (int i = 0; i < size; i++)
    {
        /* code */ cout << "Enter the element at index :" << i << endl;
        cin >> arr[i];
    }

    // 1st method to reverse an array . this method is for interview

    // int l = 0;
    // int h = size - 1;
    // while (l < h)
    //     swap(arr[l++], arr[h--]);

    // 2nd method comes from STL of c++.
    reverse(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << "the array is :" << arr[i] << endl;
    }

    return 0;
}