#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
 
void solve()
{
    pii p;
    cin >> p.first >> p.second;
 
    if (p.first % 2 != 0 && p.second % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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