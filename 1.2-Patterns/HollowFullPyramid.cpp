#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count ; i++)
    {
        /* code */
        for (int j = 0; j < count - i - 1; j++)
        {
            /* code */ cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || i == count - 1 || j == 0 || j == i)
            {
                cout << "* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout << endl;
    }

    return 0;
}