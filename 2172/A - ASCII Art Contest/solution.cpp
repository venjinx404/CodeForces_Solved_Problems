#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int arr[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int min = arr[0];
    for (i = 0; i < 3; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
 
    int result = max - min;
    if (result >= 10)
    {
        cout << "check again" << endl;
        return 0;
    }
    else
    {
        int temp;
        for (i = 0; i < 3 - 1; i++)
        {
            for (int j = 0; j < 3 - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        int X = arr[1];
        cout << "final " << X << endl;
    }
 
    return 0;
}