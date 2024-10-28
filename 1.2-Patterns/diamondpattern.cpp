#include <iostream>
using namespace std;
void DiamondPattern(int count)
{
    for (int i = 0; i <= count - 1; i++)
    {
        /* code */
        for (int j = 0; j < count - i - 1; j++)
        {
            /* code */ cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            /* code */
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i <= count - 1; i++)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            /* code */ cout << " ";
        }
        for (int j = 0; j < count - i; j++)
        {
            /* code */
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int count;
    cin >> count;
    DiamondPattern(count);
    return 0;
}

//