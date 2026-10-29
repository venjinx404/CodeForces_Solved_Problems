#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int isreverse(char s1[], char s2[])
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    if (n1 != n2)
        return 0;
    for (int i = 0; i < n1; i++)
    {
        if (tolower(s1[i]) != tolower(s2[n1 - i - 1]))
        {
            return 0;
        }
    }
    return 1;
}
 
int main()
{
    char s[105];
    char t[105];
 
    scanf("%s", s);
 
    scanf("%s", t);
 
    if (isreverse(s, t))
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
 
    return 0;
}