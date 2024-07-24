
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char a[n][100];

    for (int i = 0; i < n; i++)
        scanf(" %[^\n]s", a[i]);

    char ms[100];
    printf("Enter the main string: ");
    scanf(" %[^\n]s", ms);

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (strstr(ms, a[i]) != NULL)
        {
            printf("String '%s' occurs in '%s'\n", a[i], ms);
            return 0;
        }
    }
    printf("doesn't occur\n");
}
