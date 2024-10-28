#include<iostream>
using namespace std;

int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < count-i; j++)
        {
            /* code */
            cout<<"*";
        }
        
        cout<<endl;
    }
    
return 0;
}