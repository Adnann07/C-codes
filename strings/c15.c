#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];

    gets(a);

    char b[50];

    strcpy(b,a);
    strrev(b);

    if(strcmp(a,b) == 0)
        printf("palindrome");
    else
        printf("not palindrome");
}
