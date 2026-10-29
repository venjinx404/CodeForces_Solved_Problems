#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int x = 0;
 
    char p[5];
 
    for (i = 0; i < n; i++)
    {
        scanf("%s", p);
 
        if (strcmp(p, "++X") == 0 || strcmp(p, "X++") == 0)
        {
            x++;
        }
        else if (strcmp(p, "--X") == 0 || strcmp(p, "X--") == 0)
        {
            x--;
        }
        else
        {
            printf("Invaild Statement");
        }
    }
 
    printf("%d", x);
 
    return 0;
}