

#include <stdio.h>
#include <string.h>

int main()
{

    int n,i;
    printf("how many strings: \n");
    scanf("%d",&n);

    char c[n][100];

    for (int i = 0; i < n+1; i++)
        gets(c[i]);

    printf("Palindrome strings: ");
    for (int i = 0; i < n+1; i++)
    {
        char rev[100];
        strcpy(rev, c[i]);
        strrev(rev);

        if (strcmp(c[i], rev) == 0) {
            puts(c[i]);
        }
    }
    return 0;
}

