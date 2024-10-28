#include <iostream>
using namespace std;
void invertedFullPyramid(int count)
{
       for (int i = 0; i <= count - 1; i++)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            /* code */ cout << " ";
        }
        for (int j = 0; j < count-i; j++)
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
    invertedFullPyramid(count);
    return 0;
}