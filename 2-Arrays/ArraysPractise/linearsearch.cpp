#include <iostream>
using namespace std;
bool linearsearch(int arr[], int size, int target)
{
    
    for (int i = 0; i < size; i++)
    {
        /* code */ if (arr[i] == target)
            return true;
    }
    return false;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the No. of elments of Array:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        /* code */ cout << "Enter the value at index:" << i << endl;
        cin >> arr[i];
    }
    int target;
    cout << "Enter Target value to be searched:" << endl;
    cin >> target;

    int ans = linearsearch(arr, size, target);
    cout << "Ans is :" << ans;
    return 0;
}