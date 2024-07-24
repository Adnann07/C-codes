
#include<stdio.h>
#include<string.h>

int main()
{
    char a[50],b[50];
    int i,n,j;
    gets(a);

    printf("Number of characters to extract from right: ");
    scanf("%d",&n);

    for(i = 0,j = strlen(a)-n ; i < n ; i++,j++)
    {
        b[i]=a[j];
    }

    b[i]=0;

    puts(b);
}
