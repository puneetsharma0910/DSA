#include <iostream>
using namespace std;
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        /* code */
        ans = ans * a;
    }
    return ans;
}

int main()
{
    // in this code i am going to print a^b using function
    int ans = power(2, 3);
    cout << ans;
    return 0;
}