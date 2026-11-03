#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
 
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
 
    // x=rock
    // y=scissor
    // z=paper
    int n = x + y + z;
 
    if (x >= z && x >= y)
    {
        cout << string(n, 'P') << endl;
    }
    else if (y >= z && y >= x)
    {
        cout << string(n, 'R') << endl;
    }
 
    else
    {
        cout << string(n, 'S') << endl;
    }
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