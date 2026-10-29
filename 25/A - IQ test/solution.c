#include <stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    int arr[100];
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd_count++;
        }
    }
    int result = (odd_count == 1) ? 1 : 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == result)
        {
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}