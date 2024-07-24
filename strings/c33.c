
#include<stdio.h>
#include<string.h>

int main()
{
    int n = 10, i;

    char a[10][100];

    for (i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }
    char temp[100];
    strcpy(temp, a[0]);
    strcpy(a[0], a[4]);
    strcpy(a[4], temp);

    printf("\nStrings after swapping:\n");
    for (int i = 0; i < n; i++)
        puts(a[i]);

    return 0;
}
