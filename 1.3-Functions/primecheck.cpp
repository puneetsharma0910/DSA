#include <iostream>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            return false;
        }
        else {
            return true;
        }
    }

}

int main()
{
    int n;
    cin >> n;
    bool ans = prime(n);
    if (ans == true)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }

    return 0;
}