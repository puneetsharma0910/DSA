#include <iostream>
#include <vector>
using namespace std;
void StoreOdds(int arr[] , int size, int index, vector<int>&store){
     if (index == size)
        return;
    // 1 case mai
    if (arr[index]&1)
        store.push_back(arr[index]);
    // recursiva call
    StoreOdds(arr,size,index+1,store);
    
}
// void PrintOddNos(int arr[], int size, int index)
// {
//     if (index == size)
//         return;
//     // 1 case mai
//     if (arr[index]&1)
//         cout << arr[index] << " ";
//     // recursiva call
//     PrintOddNos(arr, size, index + 1);
// }
int main()
{
    int arr[] = {11, 12, 13, 14, 15, 171, 180, 197};
    int size = sizeof(arr) / sizeof(int);
    vector<int> store;
    int index = 0;
    StoreOdds(arr, size, index,store);
    for(auto it:store)
    cout << it << " ";
    return 0;
}