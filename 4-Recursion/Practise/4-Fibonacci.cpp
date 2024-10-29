#include <iostream>
using namespace std;
int FibSeries(int n)
{
    // base case
    if (n == 0 || n == 1)
        return n;
    // ek mai solve larunga baaki recursion
    int FibAns = FibSeries(n - 1) + FibSeries(n - 2);
    return FibAns;
}
int main()
{
    int n = 8
    ;
    int answer = FibSeries(n);
    cout << "your answer is :";
    cout << answer;
    return 0;
}