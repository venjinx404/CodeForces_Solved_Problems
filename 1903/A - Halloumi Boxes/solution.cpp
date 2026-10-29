#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    if (k == 1)
    {
        if (is_sorted(a.begin(), a.end()))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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