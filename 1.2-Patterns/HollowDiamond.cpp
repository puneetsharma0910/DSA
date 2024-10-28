#include<iostream>
using namespace std;
void HollowDiamond(int count){
       for (int i = 0; i < count ; i++)
    {
        /* code */
        for (int j = 0; j < count - i - 1; j++)
        {
            /* code */ cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || j == 0 || j == i)
            {
                cout << "* ";
            }
            else{
                cout<<"  ";
            }
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
            if (/*i == 0*/i==count-1 || j == 0 || j == count - i - 1)
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
int main(){
    int count;
    cin >> count;
    HollowDiamond(count);
    
return 0;
}