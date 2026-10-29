#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    int nextyear = y + 1;
 
    while (1)
    {
        bool used[10] = {false};
        int temp = nextyear;
        bool distint = true;
 
        while (temp > 0)
        {
            int digit = temp % 10;
            if (used[digit])
            {
                distint = false;
                break;
            }
            used[digit] = true;
            temp /= 10;
        }
        if (distint)
        {
            cout << nextyear << endl;
            break;
        }
        nextyear++;
    }
    return 0;
}