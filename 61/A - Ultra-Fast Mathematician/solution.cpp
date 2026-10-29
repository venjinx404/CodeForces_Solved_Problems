#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s1, s2;
    cin >> s1 >> s2;
 
    int i, j;
    string result = "";
 
    for (i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
        {
            result += '0';
        }
        else
        {
            result += '1';
        }
    }
    cout << result << endl;
 
    return 0;
}