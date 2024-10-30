#include <iostream>
using namespace std;
void Merge(int arr[], int s, int e, int mid)
{
    int LeftLength = mid - s + 1;
    int RightLength = e - mid;
    int *leftArr = new int[LeftLength];
    int *rightArr = new int[RightLength];
    // ye dono array empty hai , to ab ismai value daalo org array ki
    // acha ismai abhi bhi unsorted values hi dalegi
    // par kyuki mai ab 2 alag alag array create kar chuka hu to ab mujhe merge two sorted arrays ka concept lagana hai
    int index = s;
    
    for (int i = 0; i < LeftLength; i++)
    {
        leftArr[i] = arr[index];
        index++;
    }
    for (int i = 0; i < RightLength; i++)
    {
        rightArr[i] = arr[index];
        index++;
    }
    // dono arrays mai ab org. array ki values aa chuki hai
    int i = 0;
    int j = 0;
    int mainarrayindex = s;
    while (i < LeftLength && j < RightLength)
    {
        if (leftArr[i] < rightArr[j])
        {
            arr[mainarrayindex] = leftArr[i];
            mainarrayindex++;
            i++;
        }
        else
        {
            arr[mainarrayindex] = rightArr[j];
            mainarrayindex++;
            j++;
        }
    }
    while (i < LeftLength)
    {
        arr[mainarrayindex] = leftArr[i];
        mainarrayindex++;
        i++;
    }
    while (j < RightLength)
    {
        arr[mainarrayindex] = rightArr[j];
        mainarrayindex++;
        j++;
    }
}
void MergeSort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;

    // left recursive call
    MergeSort(arr, s, mid);
    // right recursive call
    MergeSort(arr, mid + 1, e);
    // merge karna hai mujhe sab ko
    Merge(arr, s, e, mid);
}
int main()
{
    int arr[] = {10, 80, 110, 90, 50, 30, 40, 20};
    int size = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = size - 1;
    MergeSort(arr, s, e);
    cout << "sorted array is :" << endl;
    for (int it : arr)
    {

        cout << it << " ";
    }
    return 0;
}