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
    vector<pss> v(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
 
        bool match = false;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j].first == a && v[j].second == b)
            {
                match = true;
                break;
            }
        }
        if (!match)
        {
            v.push_back({a, b});
            count++;
        }
    }
    cout << count << endl;
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