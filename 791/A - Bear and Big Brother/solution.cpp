#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a, b;
    cin >> a;
    cin >> b;
 
    int year = 0;
    do
    {
        year++;
        a = 3 * a;
        b = 2 * b;
    } while (a <= b);
 
    cout << year << endl;
 
    return 0;
}