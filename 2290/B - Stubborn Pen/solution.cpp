#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    char p = 'R';
    int count = 0;
 
    for (int i = 0; i < s.size(); i++)
    {
        if (p != s[i])
        {
            count++;
            p = s[i];
        }
 
        if (p == 'R')
            p = 'B';
 
        else
            p = 'R';
    }
    cout << count << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}