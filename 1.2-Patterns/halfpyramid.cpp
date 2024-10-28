#include<iostream>
using namespace std;

int main(){
   int i, j, count;
   cin>>count;
   for(i=0 ; i<count ; i++)
   {
    for(j=0 ; j<i+1 ; j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
    
return 0;
}