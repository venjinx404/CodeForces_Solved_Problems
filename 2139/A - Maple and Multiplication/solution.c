#include <stdio.h>
int main()
{
    int a, b, i, t;
 
    scanf("%d", &t);
 
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d", &a, &b);
 
        if (a == b)
        {
            printf("0
");
        }
        else if (a % b == 0 || b % a == 0)
        {
            printf("1
");
        }
        else
        {
            printf("2
");
        }
    }
 
    return 0;
}