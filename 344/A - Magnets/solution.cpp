#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    pair<int, int> m[n];
 
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[i].first = s[0] - '0';
        m[i].second = s[1] - '0';
    }
 
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (m[i] != m[i + 1])
        {
            count++;
        }
    }
 
    cout << count << endl;
    return 0;
}