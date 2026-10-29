#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
 char p[] = "codeforces";
    char c;
    cin >> c;
 
    if (strchr(p, c) != NULL)
    {
        cout << "Yes"<<endl;
    }
    else
    {
        cout << "No"<<endl;
    }
}
   
 
    return 0;
}