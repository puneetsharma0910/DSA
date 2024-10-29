#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;
int MinValue(int arr[][3])
{
    int minvalue = INT_MAX;
    int rowsize = 3;
    int colsize = 3;
    for (int i = 0; i < rowsize; i++)
    {
        /* code */for (int j = 0; j < colsize; j++)
        {
            /* code */minvalue = min(minvalue,arr[i][j]);
        }
        
    }
    return minvalue;

}

int main()
{
    int arr[3][3] = {
                 {70, 23, 41}
                  ,{-300, 69, 18} 
                 , {25, 55, 88}
                   } ;
     int ans = MinValue(arr)           ;
     cout<<"Min value is :"<< ans;   
        
     return 0;
}               