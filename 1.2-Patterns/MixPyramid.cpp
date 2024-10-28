#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i; j++)
        {
            /* code */ cout << "*";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < count - i; j++)
        {
            cout << "*";
        }
        
      
    }
    cout<< endl;
    return 0;
}