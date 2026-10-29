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
    vector<pii> v(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
 
    sort(v.begin(), v.end());
    bool color = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].second % 2 == v[i + 1].second % 2)
        {
            color = true;
            break;
        }
    }
 
    if (color)
    {
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