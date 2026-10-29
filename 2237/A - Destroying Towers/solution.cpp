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
    vi tower(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tower[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tower[i] < tower[j])
            {
                tower[j] = tower[i];
                break;
            }
        }
    }
 
    int sum = 0;
 
    for (int i = 0; i < n; i++)
    {
 
        sum += tower[i];
    }
 
    cout << sum << endl;
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