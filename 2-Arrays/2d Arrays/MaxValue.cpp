#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;
int MaxValue(int arr[][3])
{
    int maxvalue = INT_MIN;
    int rowsize = 3;
    int colsize = 3;
    for (int i = 0; i < rowsize; i++)
    {
        /* code */for (int j = 0; j < colsize; j++)
        {
            /* code */maxvalue = max(maxvalue,arr[i][j]);
        }
        
    }
    return maxvalue;

}

int main()
{
    int arr[3][3] = {
                 {7088, 23, 41}
                  ,{-300, 69, 18} 
                 , {25, 55, 88}
                   } ;
     int ans = MaxValue(arr)           ;
     cout<<"Max value is :"<< ans;   
        
     return 0;
}               