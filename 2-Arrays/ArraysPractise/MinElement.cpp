#include <iostream>
#include <limits.H>
using namespace std;
int FindMinElement(int arr[], int size)
{
    int ans = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        /* code */ ans = min(ans, arr[i]);
    }
    return ans;
}

int main()
{
    int arr[500];
    int size;
    cout << "Enter the elements of array:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        /* code */ cout << "Enter the value at index:" << i << endl;
        cin >> arr[i];
    }
    int ans = FindMinElement(arr, size);
    cout << "The Min value in the array is :" << ans;
    return 0;
}