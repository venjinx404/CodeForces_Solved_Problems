#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
 
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll sum = a + b;
    ll ans;
    ll mn = min(a, b);
    if (sum / 4 > mn)
        ans = mn;
 
    else
        ans = sum / 4;
 
    cout << ans << endl;
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