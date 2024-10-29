#include <iostream>
using namespace std;
long long int Power(double n)
{
    if (n == 0)
        return 1;
    long long int PowerAns = 2 * Power(n - 1);
    return PowerAns;
}

int main()
{
    long long int n = 55;
    long long int answer = Power(n);
    cout << answer;
    return 0;
}