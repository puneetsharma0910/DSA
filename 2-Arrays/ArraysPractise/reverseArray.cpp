#include <iostream>
using namespace std;
void ReverseArray(int arr[], int size)
{
    int l = 0;
    int h = size - 1;
    while (l < h)
        swap(arr[l++], arr[h--]);
    cout << "Reversed array is :";
    for (int i = 0; i < size; i++)
    {
        /* code */ cout << arr[i] << " ";
    }
}

int main()
{
    int arr[50];
    int size;
    cout << "enter the no. of elements of an array:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        /* code */ cout << "Enter the value at index :" << i << endl;
        cin >> arr[i];
    }
    ReverseArray(arr, size);

    return 0;
}