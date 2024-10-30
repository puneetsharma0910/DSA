// #include <iostream>
// #include <vector>
// using namespace std;
// void MergeTwoSortedArrays(int arr[], int sizeArr, int brr[], int sizeBrr, vector<int> &ans)
// {
//     int i = 0;
//     int j = 0;
//     while (i < sizeArr && j < sizeBrr)
//     {
//         if (arr[i] < brr[j])
//         {
//             ans.push_back(arr[i]);
//             i++;
//         }
//         else{
//             ans.push_back(brr[j]);
//             j++;
//         }

//     }

//      while(i < sizeArr){
//             ans.push_back(arr[i]);
//             i++;
//         }
//          while(j < sizeBrr){
//             ans.push_back(brr[j]);
//             j++;
//         }
// }
//     int main()
//     {
//         int arr[] = {20, 40, 60, 80, 100};
//         int sizeArr = sizeof(arr) / sizeof(int);
//         int brr[] = {10, 30, 50};
//         int sizeBrr = sizeof(brr) / sizeof(int);
//         vector<int> ans;
//         MergeTwoSortedArrays(arr, sizeArr, brr, sizeBrr, ans);
//         for(auto it :ans) {
//             cout << it << " ";
//         }

//         return 0;
//     }

#include <iostream>
#include <vector>
using namespace std;
void MergeTwoSorted(int arr[], int brr[], int sizeArr, int sizeBrr, vector<int> &ans)
{
    int i = 0;
    int j = 0;
    while (i < sizeArr && j < sizeBrr)
    {
        if (arr[i] < brr[j])
            ans.push_back(arr[i++]);

        else
            ans.push_back(brr[j++]);
    }

    while (i < sizeArr)
    {
        ans.push_back(arr[i++]);
    }

    while (j < sizeBrr)
    {
        ans.push_back(brr[j++]);
    }
}

int main()
{
    int arr[] = {20, 40, 60, 80, 100};
    int brr[] = {10, 30, 50, 70, 90};
    vector<int> ans;
    int sizeArr = sizeof(arr) / sizeof(int);
    int sizeBrr = sizeof(brr) / sizeof(int);
    MergeTwoSorted(arr, brr, sizeArr, sizeBrr, ans);
    cout << "two array is merged now:" << endl;
    for (int it : ans)
    {
        cout << it << ' ';
    }
    return 0;
}