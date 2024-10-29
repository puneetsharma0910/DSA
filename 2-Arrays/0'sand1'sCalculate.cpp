#include <iostream>
using namespace std;
void calculateZerosAndOnes(int arr[], int size)
{
    int zerocount = 0;
    int onecount = 0;
    for (int i = 0; i < size; i++)
    {

        /* code */ if (arr[i] == 0)
        {
            zerocount++;
        }
        if (arr[i] == 1)

        {
            onecount++;
        }
    }
    cout << zerocount<< onecount;
    
}

int main()
{
    int size;
    cout << "Enter the no. of elements:" << endl;
    cin >> size;
    int arr[500];
    for (int i = 0; i < size; i++)
    {
        /* code */ cout << "enter the element at index :" << i << endl;
        cin >> arr[i];
    }
    calculateZerosAndOnes(arr, size);

    return 0;
}