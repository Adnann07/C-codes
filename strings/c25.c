#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;


    int c1=0;

    printf("enter number of strings: ");
    scanf("%d",&n);
    char c[n][50];

    for(i=0;i<n+1;i++)
    {
        gets(c[i]);
    }

    printf("enter string you wish to search: ");
    char x[40];
    gets(x);
    for(i=0;i<n+1;i++)
    {
        if(strcmp(c[i],x)==0)
        c1++;
    }
    if(c1!=0)
    {
        printf(" found");
    }
    else
    {
        printf("not found");
    }
}
