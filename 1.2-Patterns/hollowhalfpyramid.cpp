#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < i + 1; j++)
        {
            /* code */
            if (j == 0 || i == count - 1 || i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}