#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "+" << endl;
        }
 
        else if (a - b == c)
        {
            cout << "-" << endl;
        }
    }
 
    return 0;
}