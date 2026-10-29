#include <stdio.h>
int main()
{
    long x;
    int s;
    scanf("%ld", &x);
 
    s = x / 5;
    if (x % 5 != 0)
    {
        s++;
    }
    printf("%d", s);
    return 0;
}