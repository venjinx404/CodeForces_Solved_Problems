#include <stdio.h>
int main()
{
    int k, i;
    long long n;
    scanf("%lld", &n);
 
    scanf("%d", &k);
 
    for (i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    printf("%lld", n);
    return 0;
}