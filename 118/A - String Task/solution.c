#include <stdio.h>
#include <ctype.h>
 
int main() {
    char str[101];
    char res[205];
    int i, j = 0;
 
    scanf("%100s", str);  // max 100 chars
 
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch=='A'||ch=='O'||ch=='Y'||ch=='E'||ch=='U'||ch=='I'||
           ch=='a'||ch=='o'||ch=='y'||ch=='e'||ch=='u'||ch=='i')
            continue;
 
        res[j++] = '.';
        res[j++] = (char)tolower(ch);
    }
 
    res[j] = '\0';
    printf("%s
", res);
    return 0;
}