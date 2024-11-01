// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[3][3];
//     int rowsize;
//     cout << "Enter row size:"<< endl;
//     cin>> rowsize ;
//     int colsize;
//     cout << "Enter column size:" << endl;
//     cin >> colsize;
//     for (int i = 0; i < rowsize; i++)
//     {
//         for (int j = 0; j < colsize; j++)
//         {
//             /* code */
//             cout << "Enter the elements at ( " << i  << " ,"<< j << " )";
//             cin >> arr[i][j];
//         }
//     }

//     return 0;
// }
// note : the code written above is incomplete and we will use vector instead of array from now on..
// so here is the code wriiten in Vector:

#include <iostream>
#include <vector>
using namespace std;
bool searchVector(vector<vector<int>> arr, int target)
{

    int rowsize = arr.size();
    int colsize = arr[0].size();
    for (int i = 0; i < rowsize; i++)
    {
        /* code */
        for (int j = 0; j < colsize; j++)
        {
            /* code */
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> arr(4, vector<int>(3, 25));
    // for (int i = 0; i < rowsize; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < colsize; j++)
    //     {
    //         /* code */
    //         cout<< arr[i][j]<<" ";
    //     }
    //     cout << endl;
    // }
    int target;
    cout << "Enter target value to be Searched:" << endl;
    cin >> target;
    int ans =  searchVector (arr, target);
    cout << "Ans is : " << ans;

    return 0;
}