#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < count - i; j++)
        {
            /* code */
            if (i == 0 || j == 0 || i + j == count - 1)
            {
                /* code */
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