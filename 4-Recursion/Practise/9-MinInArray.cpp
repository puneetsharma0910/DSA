#include<iostream>
#include<limits.h>
using namespace std;
void MinInArray(int arr[], int size, int &ans, int index ){
    // base case
    if(index == size) return;
    // 1 case mai
    ans = min(arr[index],ans);
    // baaki recursion
    MinInArray(arr,size,ans,index+1);
}

int main(){
    int arr[] = {-100,10,20,30,40,50};
    int ans = INT_MAX;
    int size = sizeof(arr)/sizeof(int);
    int index=0;
    MinInArray(arr,size,ans,index);
    cout<< "Min ans is:" << ans;
return 0;
}