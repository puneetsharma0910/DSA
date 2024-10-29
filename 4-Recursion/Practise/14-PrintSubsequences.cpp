#include <iostream>
#include <vector>
using namespace std;
void PrintAllSub(string str, string output, int index, vector<string> &ans)
{
    // base case
    if (index == str.length())
    {
        ans.push_back(output);
        return;
    }
    char ch = str[index];
    PrintAllSub(str, output, index + 1, ans);
    PrintAllSub(str, output + ch, index + 1, ans);
}

int main()
{
    string str = "abc";
    string output = "";
    int index = 0;
    vector<string> ans;

    PrintAllSub(str, output, index, ans);
    cout << ans.size();
    for(auto it:ans){
        cout << it << " ";
    }

    // what if mujhe print ki jagah store karna hota

    return 0;
}