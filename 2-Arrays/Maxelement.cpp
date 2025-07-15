#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;
int MaxElement( int arr[], int size)
{
    int maxans = INT_MIN;
    for (int i = 0; i < size; i++)
    {
       maxans = max(arr[i], maxans);
       
    }

    return maxans;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the no. of elememts:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value at address :" << i << endl;
\    }
    cout << "the max ans is:"<< MaxElement(arr, size);

    return 0;
}
