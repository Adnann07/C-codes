
#include<stdio.h>
#include<string.h>

int main()
{
    char a[50],b[50];
    int i,n;
    gets(a);

    printf("Number of characters to extract from left: ");
    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
    {
        b[i]=a[i];
    }


    puts(b);
}
