// I //HAVE WRITTEN A CODE FOR BINARY SEARCH ALGORITHM WHICH LINEARLY SEARCHES FOR A ELEMENT IN A GIVEN ARRAY AND PRINTS TRUE IF IT IS FOUND AND PRINTS FALSE IF IT IS NOT FOUND.

// #include <iostream>
// using namespace std;
// bool LinearBinarySearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)

//     {

//         if (arr[i] == target)
//         {
//             return true;
//         } /* code */
//     }

//     return false;
// }
// int main()
// {
//     int arr[50];
//     int size;
//     int target;
//     cout << "Enter the no. of elemnets:" << endl;
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         /* code */ cout << "Enter the element for index:" << i << endl;
//         cin>> arr[i];
//     }

//     bool ans = LinearBinarySearch(arr, size, target);
//     cout << "Target value to be searched:" << endl;
//     cin >> target;
//     cout << "Ans: " << ans;
//     return 0;
// }

#include <iostream>
using namespace std;
bool LinearSearchArray(int arr[],int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i]== target)
        {
          return true;
        }
       
    
    }
   return false;
    
}

int main()
{
    int arr[50];
    int size;
    cout << " Enter the no. of elements of array:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        /* code */ cout << "Enter the element at index:" << i << endl;
        cin >> arr[i] ;

    }

    int target;
    cout << "Enter the Target value:" << endl;
    cin >> target;
  int ans =  LinearSearchArray(arr,size,target);
  cout<<"Ans:"<< ans;

    return 0;
}