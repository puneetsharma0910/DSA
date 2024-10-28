#include <iostream>
using namespace std;
void invertedHollowPyramid(int count)
{

    for (int i = 0; i <= count - 1; i++)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            /* code */ cout << " ";
        }
        for (int j = 0; j < count - i; j++)
        {
            if (i == 0 || i == count - 1 || j == 0 || j == count - i - 1)
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
}

int main()
{
    int count;
    cin >> count;
    invertedHollowPyramid(count);
    return 0;
}