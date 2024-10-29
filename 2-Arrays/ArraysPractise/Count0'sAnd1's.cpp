#include <iostream>
#include<math.h>
#include<array>
#include<limits>
using namespace std;
void Count0sAnd1s(int arr[], int n)
{
    int zerocount = 0;
    int onecount = 0;
    for (int i = 0; i < n; i++)
    {
         if (arr[i] == 0)
        {
            zerocount = zerocount + 1;
        }
        if (arr[i] == 1)
        {
            onecount++;
        }
    }
    cout << "total zeros "<< zerocount << endl;;
    cout << "total ones  "<<  onecount;
}

int main()
{

    int arr[5];
    int size;
    cout << "Enter the total size:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        /* code */ cout << "Enter the value at index " << i << endl;
        cin >> arr[i];
    }
    Count0sAnd1s(arr, size);

    return 0;
}