#include <iostream>
using namespace std;
void PrintDigits(int n)
{
    // base case
    if (n == 0)
        return;
    // ek case mai

    int newNum = n / 10;
    PrintDigits(newNum);

    int digit = n % 10;
    cout << digit << " ";

    // recursive call
}

int main()
{
    int n = 987;
    PrintDigits(n);

    return 0;
}