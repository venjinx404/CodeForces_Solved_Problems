#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string h = "hello";
    string p;
    cin >> p;
 
    int j = 0;
 
    for (int i = 0; i < p.length(); i++)
    {
        if (j == h.length())
        {
            break;
        }
 
        else if (p[i] == h[j])
        {
            j++;
        }
    }
 
    if (j == h.length())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
 
    return 0;
}