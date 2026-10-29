#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
 
void solve()
{
    int n, k;
    cin >> n >> k;
    int c = 0, i;
    vi a;
    for (i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        a.push_back(p);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            if (a[i] >= a[k - 1])
            {
                c++;
            }
        }
    }
    cout << c << endl;
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