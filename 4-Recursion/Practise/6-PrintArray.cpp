#include<iostream>
using namespace std;
void PrintArray(int arr[], int size, int index){
    //base case
    if(index == size){ 
        return;
    }
    // 1 csae mai
    cout << arr[index] << endl;
    PrintArray(arr,size,index+1);
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(int);
    int index = 0;
    PrintArray(arr,size,index);
return 0;
}