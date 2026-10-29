#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, i;
    cin >> n;
    char game[n];
 
    for (i = 0; i < n; i++)
    {
        cin >> game[i];
    }
 
    int Anton = 0;
    int Danik = 0;
 
    for (i = 0; i < n; i++)
    {
        if (game[i] == 'A')
        {
            Anton++;
        }
 
        else
        {
 
            Danik++;
        }
    }
 
    if (Anton > Danik)
    {
        cout << "Anton" << endl;
    }
    else if (Danik > Anton)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
 
    return 0;
}