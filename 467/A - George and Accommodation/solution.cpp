#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
 
void solve()
{
    int n;
    cin >> n;
    int avb = 0;
    int i;
    vector<pii> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (i = 0; i < n; i++)
    {
        if (v[i].first < v[i].second)
        {
            if (v[i].second - v[i].first >= 2)
            {
                avb++;
            }
        }
    }
    cout << avb << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}