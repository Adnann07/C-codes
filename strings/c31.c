
#include<stdio.h>
#include<string.h>

int main()
{
    char a[50],b[50];

    gets(a);

    int n = strlen(a);

    for(int i = 0  ; i  < n ; i++)
    {
        puts(a);

        char x = a[0];

        for(int j=1 ; j<n; j++)
            a[j-1] = a[j];

        a[n-1] = x;
    }
}
