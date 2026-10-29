#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
    char s[100];
    scanf("%s", s);
    int upper_count = 0;
    int lower_count = 0;
 
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper_count++;
        }
 
        else if (s[i] >= 'a' && s[i] <= 'z')
 
        {
            lower_count++;
        }
    }
 
    if (upper_count > lower_count)
    {
 
        for (i = 0; s[i] != '\0'; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else if (upper_count <= lower_count)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    printf("%s", s);
 
    return 0;
}