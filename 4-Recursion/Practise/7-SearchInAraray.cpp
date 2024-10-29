#include <iostream>
using namespace std;
bool SearchInArray(int arr[], int size, int index, int target)
{
    // base case
    if (index == size)
        return false;
    // 1 case mai
    if (arr[index] == target)
        return true;
    SearchInArray(arr,size,index+1,target)    ;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int index = 0;
    int target = 1000;
    int size = sizeof(arr) / sizeof(int);
    int ans = SearchInArray(arr, size, index, target);
    cout << ans;
    return 0;
}