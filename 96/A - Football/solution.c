#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    int i;
    int count = 1;
    scanf("%s", arr);
 
    if (strstr(arr, "0000000") != '\0' || strstr(arr, "1111111") != '\0')
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}