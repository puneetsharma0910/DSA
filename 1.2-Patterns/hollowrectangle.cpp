#include<iostream>
using namespace std;

int main(){
    int count;
    cin>>count;
    // int n;
    // cin>>n;
    // int k;
    // cin>>k;
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < count+1; j++)
        {
            // code
            if(i==0||i==count-1||j==0||j==count)
            {
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }

    
    
return 0;
}