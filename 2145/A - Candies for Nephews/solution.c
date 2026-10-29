#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n % 3 == 0)
        {
            printf("0
");
        }
 
        else
        {
            int need = 0;
            while (n % 3 != 0)
            {
                n++;
                need++;
            }
            printf("%d
", need);
        }
    }
    return 0;
}