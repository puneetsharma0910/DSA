#include <iostream>
using namespace std;
void CountingPrint(int n)
{
    if (n == 0)
        return;
    CountingPrint(n - 1);
    cout << n << " ";
}

int main()
{
    int n = 10;
    CountingPrint(n);
    return 0;
}