#include <iostream>
using namespace std;

int main()
{
    keep in mind that this is not the efficient method to solve this kind of problem.
    so, what i have to do is to find the other efficient techniques to implement this kind of question

        int n;
    cin >> n;
    int setbit = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            /* code */
            setbit = setbit + 1;
        }
        n = n >> 1;
    }
    cout << "No. of set bits:" << setbit << endl;
    return 0;
}