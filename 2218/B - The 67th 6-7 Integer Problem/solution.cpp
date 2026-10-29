#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        int sum = 0;
        int i;
        for (i = 0; i < 7; i++)
        {
            int input;
            cin >> input;
            a.push_back(input);
        }
 
        int maxIdx = max_element(a.begin(), a.end()) - a.begin();
        for (i = 0; i < 7; i++)
 
        {
            if (i != maxIdx)
            {
                a[i] = a[i] * (-1);
            }
        }
 
        for (i = 0; i < 7; i++)
        {
            sum += a[i];
        }
 
        cout << sum << endl;
    }
 
    return 0;
}