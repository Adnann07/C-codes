#include<stdio.h>
#include<string.h>

int main()
{
    int i,n;
    char c[n][50];


    printf("enter string number: ");
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        gets(c[i]);
    }
    printf("enter strings you wish to swap: ");
    int x,y;
    char temp[100];
    scanf("%d%d",&x,&y);

    strcpy(temp,c[x]);
    strcpy(c[x],c[y]);
    strcpy(c[y],temp);

    for(i=0;i<n+1;i++)
    {
        puts(c[i]);
    }
}
