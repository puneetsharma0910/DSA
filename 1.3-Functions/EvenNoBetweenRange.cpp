#include <iostream>
using namespace std;
void printEvenInsideRange(int a, int z)
{
    for (int i = a; i <= z; i++)
    {
        /* code */
        int n = i;
        if (!(n & 1))    // when n&1 gives an odd number than eventually its ! will definitely give an even number
        {
            cout << n << endl;
        }
    }
}

int main()
{
    printEvenInsideRange(101, 112);

    return 0;
}