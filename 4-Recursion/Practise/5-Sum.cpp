#include <iostream>
using namespace std;
int Sum(int n)
{
    // base case
    if (n == 1)
        return 1;
    // 1 csae mai
    int SumAns = n + Sum(n - 1);
    return SumAns;
}

int main()
{
    int n = 5;
    int Ans = Sum(n);
    cout << Ans;
    return 0;
}