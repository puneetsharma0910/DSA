#include <iostream>
using namespace std;
void fullPyramid(int count){
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
}

int main()
{
    int count;
    cin>>count;
   fullPyramid(count);

    return 0;
}