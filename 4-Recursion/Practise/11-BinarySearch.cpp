/// normal binary search mai hum while loop le andar mid update karte the ,
// isiliye ismai bhi mid function ke andar pass karna hoga

#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int s, int e, int &target)
{
    // base case
    if (s > e)
        return -1;

    int mid = (s + e) / 2;
    // 1 case mai
    if (arr[mid] == target)
        return mid;

    if (arr[mid] < target)
        BinarySearch(arr, size, mid + 1, e, target);
    else if (arr[mid] > target)
        BinarySearch(arr, size, s, mid - 1, target);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    int target = 30;
    int ans = BinarySearch(arr, size, s, e, target);
    cout << ans;
    return 0;
}