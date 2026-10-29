#include <stdio.h>
int main()
{
    int a, i, t;
    long long b;
    scanf("%d", &t);
 
    for (i = 1; i <= t; i++)
    {
        scanf("%d %lld", &a, &b);
 
        int count;
        if (a % b == 0)
        {
            count = 0;
        }
        else
        {
            count = b - (a % b);
        }
 
        printf("%d
", count);
    }
 
    return 0;
}