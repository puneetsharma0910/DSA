#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 7;
    // swap(a,b);
    // cout << a << b;
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    int temp; 
    temp = a;
    a = b;
    b = temp;
    
    cout << a << b;
    return 0;
}