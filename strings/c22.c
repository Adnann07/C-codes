
#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    printf("how many strings: ");
    scanf("%d",&n);

    char a[n][100];

    for(i = 0  ; i<n ;i++)
    {
        scanf(" %[^\n]s",a[i]);
    }

    for(i = 0  ; i<n ;i++)
    {
        strrev(a[i]);
    }


    for(int i  = 0 ; i<n ; i++)
        puts(a[i]);
}
