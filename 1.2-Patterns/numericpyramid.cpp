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
            cout << (j + 1)<<" ";

        }
        cout << endl;
    }

    return 0;
}