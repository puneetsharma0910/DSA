#include<iostream>
using namespace std;

bool CheckArraySorted(int arr[], int size, int i ){
    // base case
    if(i==size-1){
        return true;
    }
    //1 case mai
    if(arr[i] < arr[i+1]) return true;
   bool ans =  CheckArraySorted(arr, size, i+1);

}

int main(){
    int arr[] = {10,15,20,25,30,35};
    int size = sizeof(arr)/sizeof(int);
    int i = 0;
    int ans = CheckArraySorted(arr,size,i);
    cout << ans;


return 0;
}