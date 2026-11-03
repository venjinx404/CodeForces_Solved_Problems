#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
 
void solve()
{
    int n, m;
    string p, q;
    cin >> n >> m >> p >> q;
 
    q += "six";
 
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());
 
    if (p == q)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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