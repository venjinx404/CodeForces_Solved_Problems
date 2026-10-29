#include <stdio.h>
#include <string.h>
#include <strings.h>
int main()
{
    char s1[100];
    char s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
 
    int r = strcasecmp(s1, s2);
 
    if (r == 0)
    {
        printf("0");
    }
    else if (r > 0)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }
 
    return 0;
}