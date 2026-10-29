#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, i, h;
    cin >> n >> h;
 
    int width = 0;
    vector<int> v;
 
    for (i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
 
    for (i = 0; i < n; i++)
    {
        if (v[i] > h)
        {
            width += 2;
        }
        else
        {
            width += 1;
        }
    }
    cout << width;
 
    return 0;
}