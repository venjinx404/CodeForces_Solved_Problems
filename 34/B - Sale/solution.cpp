#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
 
void solve()
{
    int n, m;
    cin >> n >> m;
    vi v(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
 
        if (v[i] < 0)
            sum += abs(v[i]);
    }
 
    cout << sum;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}