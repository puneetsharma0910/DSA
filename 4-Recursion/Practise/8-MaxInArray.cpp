#include <iostream>

using namespace std;
void MaxInArray(int arr[], int size, int index, int &ans)
{
    // base case
    if (index == size)
        return;
    // 1 case mai
    ans = max(arr[index], ans);
    MaxInArray(arr, size, index + 1, ans);
    // agar mai yaha pe ans print karwaata hu har ek recursion call ke baad ans print hoga 
    // that's why print ans in main function
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(int);
    int ans = -1;
    int index = 0;
    MaxInArray(arr, size, index, ans);
    cout<< "Max Ans Is:" << ans;

    return 0;
}