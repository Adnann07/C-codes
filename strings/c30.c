
#include<stdio.h>
#include<string.h>

int main()
{
    char a[50],b[50];
    int i,n,j,p;
    gets(a);

    printf("extract from : ");
    scanf("%d",&p);
    printf("number of characters to extract : ");
    scanf("%d",&n);

    for(i = 0,j = p-1; i < n ; i++,j++)
    {
        b[i]=a[j];
    }

    b[i]=0;

    puts(b);
}
