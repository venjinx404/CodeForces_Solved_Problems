#include <stdio.h>
int main()
{
    int t, x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &x);
        int y = 9;
        int temp = x;
 
        while (temp > 0)
        {
            int d = temp % 10;
            if (d < y)
            {
                y = d;
            }
            temp /= 10;
        }
        printf("%d
", y);
    }
    return 0;
}