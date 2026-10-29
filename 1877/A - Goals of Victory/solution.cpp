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
    vi a(n);
    int Teffi = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        Teffi += a[i];
    }
 
    int missing = 0 - Teffi;
    cout << missing << endl;
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