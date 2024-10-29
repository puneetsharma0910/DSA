#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int b = 7;

    // 1st method using temp.

    // int temp = a;
    // a = b;
    // b = temp;
    // cout << a  << " " << b;

    // 2nd method using inbuilt swap function.

    // swap(a, b);
    // cout << a << " " << b;

    // 3rd method using xor method. VERY IMPORTANT METHOD IN TERMS OF INTERVIEW.
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << "        " << b;

    return 0;
}