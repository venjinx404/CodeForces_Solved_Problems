#include <stdio.h>
#include <string.h>
 
int main()
{
    char n[101];
    int i;
    int u = 0;
    int d[256] = {0};
    scanf("%s", n);
    int l = strlen(n);
 
    for (i = 0; i < l; ++i)
    {
        char ch = n[i];
        if (d[ch] == 0)
        {
            d[ch] = 1;
            u++;
        }
    }
    if (u % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}